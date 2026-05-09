#include <cstdio>
#include <cassert>
#include <vector>
#include <array>
#include <string>
#include <stdexcept>

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/renderer_context.hpp"
#include "librecomp/game.hpp"
#include "librecomp/rsp.hpp"

namespace aero {
    std::unique_ptr<ultramodern::renderer::RendererContext>
    create_render_context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode);
}

#define SDL_MAIN_HANDLED
#include "SDL.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <timeapi.h>
#include "SDL_syswm.h"
#endif

extern "C" void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx);
gpr get_entrypoint_address();

// ---------------------------------------------------------------------------
// GFX callbacks
// ---------------------------------------------------------------------------

ultramodern::gfx_callbacks_t::gfx_data_t create_gfx() {
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        fprintf(stderr, "Failed to initialize SDL2: %s\n", SDL_GetError());
    }
    return {};
}

static SDL_Window* window = nullptr;

ultramodern::renderer::WindowHandle create_window(ultramodern::gfx_callbacks_t::gfx_data_t) {
    uint32_t flags = SDL_WINDOW_RESIZABLE;
#ifdef RT64_SDL_WINDOW_VULKAN
    flags |= SDL_WINDOW_VULKAN;
#endif

    window = SDL_CreateWindow("Aero Fighters Assault: Recompiled",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, flags);

    if (window == nullptr) {
        fprintf(stderr, "Failed to create window: %s\n", SDL_GetError());
    }

    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    SDL_GetWindowWMInfo(window, &wmInfo);

#ifdef _WIN32
    return ultramodern::renderer::WindowHandle{ wmInfo.info.win.window, GetCurrentThreadId() };
#else
    return ultramodern::renderer::WindowHandle{ window };
#endif
}

void update_gfx(void*) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            exit(0);
        }
    }
}

// ---------------------------------------------------------------------------
// Audio callbacks (adapted from engine/src/main/main.cpp)
// ---------------------------------------------------------------------------

static SDL_AudioCVT  audio_convert;
static SDL_AudioDeviceID audio_device = 0;

static uint32_t sample_rate        = 48000;
static uint32_t output_sample_rate = 48000;

constexpr uint32_t input_channels          = 2;
static    uint32_t output_channels         = 2;
constexpr uint32_t duplicated_input_frames = 4;
static    uint32_t discarded_output_frames = 0;
constexpr uint32_t bytes_per_frame         = input_channels * sizeof(float);

void queue_samples(int16_t* audio_data, size_t sample_count) {
    static std::vector<float> swap_buffer;
    static std::array<float, duplicated_input_frames * input_channels> duplicated_sample_buffer{};

    size_t resampled_sample_count = sample_count + duplicated_input_frames * input_channels;
    size_t max_sample_count = (std::max)(resampled_sample_count, resampled_sample_count * (size_t)audio_convert.len_mult);
    if (max_sample_count > swap_buffer.size()) {
        swap_buffer.resize(max_sample_count);
    }

    for (size_t i = 0; i < duplicated_input_frames * input_channels; i++) {
        swap_buffer[i] = duplicated_sample_buffer[i];
    }

    for (size_t i = 0; i < sample_count; i += input_channels) {
        swap_buffer[i + 0 + duplicated_input_frames * input_channels] = audio_data[i + 1] * (0.5f / 32768.0f);
        swap_buffer[i + 1 + duplicated_input_frames * input_channels] = audio_data[i + 0] * (0.5f / 32768.0f);
    }

    assert(sample_count > duplicated_input_frames * input_channels);

    for (size_t i = 0; i < duplicated_input_frames * input_channels; i++) {
        duplicated_sample_buffer[i] = swap_buffer[i + sample_count];
    }

    audio_convert.buf = reinterpret_cast<Uint8*>(swap_buffer.data());
    audio_convert.len = (int)((sample_count + duplicated_input_frames * input_channels) * sizeof(swap_buffer[0]));

    if (SDL_ConvertAudio(&audio_convert) < 0) {
        fprintf(stderr, "SDL audio convert error: %s\n", SDL_GetError());
        return;
    }

    uint64_t cur_queued_us = (uint64_t)SDL_GetQueuedAudioSize(audio_device) / bytes_per_frame * 1000000 / sample_rate;
    uint32_t bytes_to_queue = audio_convert.len_cvt - output_channels * discarded_output_frames * (uint32_t)sizeof(float);
    float*   samples_to_queue = swap_buffer.data() + output_channels * discarded_output_frames / 2;

    uint32_t skip_factor = (uint32_t)(cur_queued_us / 100000);
    if (skip_factor != 0) {
        uint32_t skip_ratio = 1u << skip_factor;
        bytes_to_queue /= skip_ratio;
        for (size_t i = 0; i < bytes_to_queue / (output_channels * sizeof(float)); i++) {
            samples_to_queue[2 * i + 0] = samples_to_queue[2 * skip_ratio * i + 0];
            samples_to_queue[2 * i + 1] = samples_to_queue[2 * skip_ratio * i + 1];
        }
    }

    SDL_QueueAudio(audio_device, samples_to_queue, bytes_to_queue);
}

size_t get_frames_remaining() {
    constexpr float buffer_offset_frames = 1.0f;
    uint64_t buffered_bytes = SDL_GetQueuedAudioSize(audio_device);
    buffered_bytes = buffered_bytes * 2 * sample_rate / output_sample_rate / output_channels;

    uint32_t frames_per_vi = sample_rate / 60;
    if (buffered_bytes > (uint64_t)(buffer_offset_frames * bytes_per_frame * frames_per_vi)) {
        buffered_bytes -= (uint64_t)(buffer_offset_frames * bytes_per_frame * frames_per_vi);
    } else {
        buffered_bytes = 0;
    }
    return (size_t)(buffered_bytes / bytes_per_frame);
}

static void update_audio_converter() {
    if (SDL_BuildAudioCVT(&audio_convert, AUDIO_F32, input_channels, sample_rate,
                                          AUDIO_F32, output_channels, output_sample_rate) < 0) {
        fprintf(stderr, "SDL audio converter error: %s\n", SDL_GetError());
    }
    discarded_output_frames = duplicated_input_frames * output_sample_rate / sample_rate;
}

void set_frequency(uint32_t freq) {
    sample_rate = freq;
    update_audio_converter();
}

static void reset_audio(uint32_t output_freq) {
    SDL_AudioSpec spec{
        .freq     = (int)output_freq,
        .format   = AUDIO_F32,
        .channels = (Uint8)output_channels,
        .silence  = 0,
        .samples  = 0x100,
        .padding  = 0,
        .size     = 0,
        .callback = nullptr,
        .userdata = nullptr,
    };

    audio_device = SDL_OpenAudioDevice(nullptr, 0, &spec, nullptr, 0);
    if (audio_device == 0) {
        fprintf(stderr, "SDL error opening audio device: %s\n", SDL_GetError());
    }
    SDL_PauseAudioDevice(audio_device, 0);

    output_sample_rate = output_freq;
    update_audio_converter();
}

// ---------------------------------------------------------------------------
// RSP callbacks
// ---------------------------------------------------------------------------

RspUcodeFunc* get_rsp_microcode(const OSTask* task) {
    fprintf(stderr, "RSP task type %u requested — no microcode available yet\n", task->t.type);
    return nullptr;
}

// ---------------------------------------------------------------------------
// Game entry
// ---------------------------------------------------------------------------

recomp::GameEntry aero_fighters_entry = {
    .rom_hash      = 0x0,
    .internal_name = "AERO FIGHTERS ASSAUL",
    .game_id       = u8"afa.n64.us",
    .mod_game_id   = "afa",
    .save_type     = recomp::SaveType::Eep4k,
    .is_enabled    = true,
    .entrypoint_address = get_entrypoint_address(),
    .entrypoint    = recomp_entrypoint,
};

// ---------------------------------------------------------------------------
// Entry point
// ---------------------------------------------------------------------------

int main(int argc, char** argv) {
    (void)argc; (void)argv;

#ifdef _WIN32
    timeBeginPeriod(1);
    SDL_setenv("SDL_AUDIODRIVER", "wasapi", 1);
#endif

    SDL_InitSubSystem(SDL_INIT_AUDIO);
    reset_audio(48000);

    recomp::register_game(aero_fighters_entry);

    recomp::rsp::callbacks_t rsp_callbacks{
        .get_rsp_microcode = get_rsp_microcode,
    };

    ultramodern::gfx_callbacks_t gfx_callbacks{
        .create_gfx    = create_gfx,
        .create_window = create_window,
        .update_gfx    = update_gfx,
    };

    ultramodern::audio_callbacks_t audio_callbacks{
        .queue_samples       = queue_samples,
        .get_frames_remaining = get_frames_remaining,
        .set_frequency       = set_frequency,
    };

    ultramodern::renderer::callbacks_t renderer_callbacks{
        .create_render_context = aero::create_render_context,
    };

    recomp::start(
        recomp::Version{1, 0, 0},
        {},
        rsp_callbacks,
        renderer_callbacks,
        audio_callbacks,
        {},
        gfx_callbacks,
        {},
        {},
        {}
    );

#ifdef _WIN32
    timeEndPeriod(1);
#endif

    return 0;
}
