#include <cassert>
#include <vector>
#include <array>
#include <string>
#include <stdexcept>
#include <filesystem>
#include <fstream>
#include <thread>
#include <cstdio>
#include <ctime>

#include "ultramodern/ultra64.h"
#include "ultramodern/ultramodern.hpp"
#include "ultramodern/renderer_context.hpp"
#include "librecomp/game.hpp"
#include "librecomp/rsp.hpp"

#define XXH_STATIC_LINKING_ONLY
#define XXH_IMPLEMENTATION
#include "xxhash.h"

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
void aero_register_overlays();

// ---------------------------------------------------------------------------
// Logging
// ---------------------------------------------------------------------------

static FILE* g_console = nullptr;

static void log_init(const std::filesystem::path& log_path) {
#ifdef _WIN32
    AllocConsole();
    fopen_s(&g_console, "CONOUT$", "w");
    SetConsoleTitleA("Aero Fighters Assault: Recompiled — Debug");
    freopen_s((FILE**)stdout, log_path.string().c_str(), "w", stdout);
    freopen_s((FILE**)stderr, log_path.string().c_str(), "w", stderr);
#else
    g_console = stdout;
    freopen(log_path.string().c_str(), "w", stdout);
#endif
    setvbuf(stdout, nullptr, _IONBF, 0);
    if (g_console) setvbuf(g_console, nullptr, _IONBF, 0);
}

static void log(const char* fmt, ...) {
    char buf[2048];
    va_list args;
    va_start(args, fmt);
    vsnprintf(buf, sizeof(buf), fmt, args);
    va_end(args);

    time_t now = time(nullptr);
    struct tm t;
#ifdef _WIN32
    localtime_s(&t, &now);
#else
    localtime_r(&now, &t);
#endif
    char line[2176];
    snprintf(line, sizeof(line), "[%02d:%02d:%02d] %s\n", t.tm_hour, t.tm_min, t.tm_sec, buf);
    if (g_console) { fputs(line, g_console); fflush(g_console); }
    fputs(line, stdout); fflush(stdout);
}

// ---------------------------------------------------------------------------
// ROM utilities
// ---------------------------------------------------------------------------

static std::vector<uint8_t> read_file_bytes(const std::filesystem::path& path) {
    std::ifstream f(path, std::ios::binary);
    if (!f) return {};
    f.seekg(0, std::ios::end);
    std::vector<uint8_t> data(f.tellg());
    f.seekg(0, std::ios::beg);
    f.read(reinterpret_cast<char*>(data.data()), data.size());
    return data;
}

static uint64_t hash_rom(const std::vector<uint8_t>& data) {
    return XXH3_64bits(data.data(), data.size());
}

// ---------------------------------------------------------------------------
// GFX callbacks
// ---------------------------------------------------------------------------

ultramodern::gfx_callbacks_t::gfx_data_t create_gfx() {
    log("[GFX] create_gfx: setting SDL hints");
    SDL_SetHint(SDL_HINT_WINDOWS_DPI_AWARENESS, "permonitorv2");
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMECONTROLLER) != 0) {
        log("[GFX] SDL_Init failed: %s", SDL_GetError());
    } else {
        log("[GFX] SDL_Init OK");
    }
    return {};
}

static SDL_Window* window = nullptr;

ultramodern::renderer::WindowHandle create_window(ultramodern::gfx_callbacks_t::gfx_data_t) {
    log("[GFX] create_window: creating SDL window 1280x720");
    uint32_t flags = SDL_WINDOW_RESIZABLE;
#ifdef RT64_SDL_WINDOW_VULKAN
    flags |= SDL_WINDOW_VULKAN;
#endif

    window = SDL_CreateWindow("Aero Fighters Assault: Recompiled",
        SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, flags);

    if (window == nullptr) {
        log("[GFX] SDL_CreateWindow failed: %s", SDL_GetError());
    } else {
        log("[GFX] SDL window created OK");
    }

    SDL_SysWMinfo wmInfo;
    SDL_VERSION(&wmInfo.version);
    SDL_GetWindowWMInfo(window, &wmInfo);

#ifdef _WIN32
    log("[GFX] Window HWND obtained, thread_id=%lu", GetCurrentThreadId());
    return ultramodern::renderer::WindowHandle{ wmInfo.info.win.window, GetCurrentThreadId() };
#else
    return ultramodern::renderer::WindowHandle{ window };
#endif
}

void update_gfx(void*) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            log("[GFX] SDL_QUIT received — exiting");
            exit(0);
        }
    }
}

// ---------------------------------------------------------------------------
// Audio callbacks
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
        log("[AUDIO] SDL_ConvertAudio error: %s", SDL_GetError());
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
        log("[AUDIO] SDL_BuildAudioCVT error: %s", SDL_GetError());
    }
    discarded_output_frames = duplicated_input_frames * output_sample_rate / sample_rate;
}

void set_frequency(uint32_t freq) {
    log("[AUDIO] set_frequency: %u Hz", freq);
    sample_rate = freq;
    update_audio_converter();
}

static void reset_audio(uint32_t output_freq) {
    log("[AUDIO] reset_audio: opening device at %u Hz", output_freq);
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
        log("[AUDIO] SDL_OpenAudioDevice failed: %s", SDL_GetError());
    } else {
        log("[AUDIO] Audio device opened OK (id=%u)", audio_device);
    }
    SDL_PauseAudioDevice(audio_device, 0);

    output_sample_rate = output_freq;
    update_audio_converter();
}

// ---------------------------------------------------------------------------
// RSP callbacks
// ---------------------------------------------------------------------------

static RspExitReason rsp_stub_audio(uint8_t* rdram, uint32_t ucode_addr) {
    (void)rdram; (void)ucode_addr;
    return RspExitReason::Broke;
}

static RspExitReason rsp_stub_unknown(uint8_t* rdram, uint32_t ucode_addr) {
    (void)rdram; (void)ucode_addr;
    return RspExitReason::Broke;
}

RspUcodeFunc* get_rsp_microcode(const OSTask* task) {
    switch (task->t.type) {
        case M_AUDTASK:
            log("[RSP] Audio task (type=%u) — stub (silence)", task->t.type);
            return rsp_stub_audio;
        default:
            log("[RSP] Unknown task type=%u ucode=0x%08X — stub", task->t.type, task->t.ucode);
            return rsp_stub_unknown;
    }
}

// ---------------------------------------------------------------------------
// Game entry
// ---------------------------------------------------------------------------

recomp::GameEntry aero_fighters_entry = {
    .rom_hash           = 0x0,
    .internal_name      = "AERO FIGHTERS ASSAUL",
    .game_id            = u8"afa.n64.us",
    .mod_game_id        = "afa",
    .save_type          = recomp::SaveType::Eep4k,
    .is_enabled         = true,
    .entrypoint_address = get_entrypoint_address(),
    .entrypoint         = recomp_entrypoint,
};

// ---------------------------------------------------------------------------
// Entry point
// ---------------------------------------------------------------------------

int main(int argc, char** argv) {
    (void)argc; (void)argv;

    std::filesystem::path exe_dir = std::filesystem::current_path();
    std::filesystem::path log_path = exe_dir / "aero_recomp.log";

    log_init(log_path);
    log("=== Aero Fighters Assault: Recompiled ===");
    log("[INIT] exe_dir: %s", exe_dir.string().c_str());
    log("[INIT] log file: %s", log_path.string().c_str());

#ifdef _WIN32
    timeBeginPeriod(1);
    SDL_setenv("SDL_AUDIODRIVER", "wasapi", 1);
    log("[INIT] Win32: timeBeginPeriod(1), WASAPI audio forced");
#endif

    std::filesystem::path config_path = exe_dir;
    log("[INIT] config_path: %s", config_path.string().c_str());
    recomp::register_config_path(config_path);

    std::filesystem::path rom_stored = config_path / "afa.n64.us.z64";
    std::filesystem::path rom_source_candidates[] = {
        exe_dir / "Roms" / "AeroFightersAssault.z64",
        exe_dir / "roms" / "AeroFightersAssault.z64",
        exe_dir / ".." / "Roms" / "AeroFightersAssault.z64",
    };

    if (!std::filesystem::exists(rom_stored)) {
        log("[ROM] Stored ROM not found at: %s", rom_stored.string().c_str());
        for (auto& src : rom_source_candidates) {
            if (std::filesystem::exists(src)) {
                log("[ROM] Found source ROM at: %s", src.string().c_str());
                log("[ROM] Copying to config_path...");
                std::error_code ec;
                std::filesystem::copy_file(src, rom_stored, std::filesystem::copy_options::overwrite_existing, ec);
                if (ec) {
                    log("[ROM] Copy failed: %s", ec.message().c_str());
                } else {
                    log("[ROM] Copy OK -> %s", rom_stored.string().c_str());
                }
                break;
            }
        }
    } else {
        log("[ROM] Stored ROM already exists: %s", rom_stored.string().c_str());
    }

    if (std::filesystem::exists(rom_stored)) {
        log("[ROM] Computing XXH3_64 hash of ROM...");
        auto rom_data = read_file_bytes(rom_stored);
        if (!rom_data.empty()) {
            uint64_t h = hash_rom(rom_data);
            log("[ROM] ROM size: %zu bytes  hash: 0x%016llX", rom_data.size(), (unsigned long long)h);
            aero_fighters_entry.rom_hash = h;
            log("[ROM] rom_hash set to 0x%016llX", (unsigned long long)h);
        } else {
            log("[ROM] ERROR: could not read ROM file!");
        }
    } else {
        log("[ROM] WARNING: no ROM found — game will not boot");
    }

    log("[INIT] Registering game entry (game_id=afa.n64.us)");
    recomp::register_game(aero_fighters_entry);

    log("[AUDIO] Initializing SDL audio subsystem");
    SDL_InitSubSystem(SDL_INIT_AUDIO);
    reset_audio(48000);

    log("[BOOT] Spawning auto-start thread...");
    std::thread auto_start_thread([]() {
        log("[BOOT] Auto-start thread: waiting 500ms for init to settle");
        SDL_Delay(500);
        if (std::filesystem::exists(std::filesystem::current_path() / "afa.n64.us.z64")) {
            log("[BOOT] Calling recomp::start_game(u8\"afa.n64.us\")");
            recomp::start_game(u8"afa.n64.us");
            log("[BOOT] start_game() returned — game is running");
        } else {
            log("[BOOT] No ROM available — skipping start_game()");
        }
    });
    auto_start_thread.detach();

    recomp::rsp::callbacks_t rsp_callbacks{
        .get_rsp_microcode = get_rsp_microcode,
    };

    ultramodern::gfx_callbacks_t gfx_callbacks{
        .create_gfx    = create_gfx,
        .create_window = create_window,
        .update_gfx    = update_gfx,
    };

    ultramodern::audio_callbacks_t audio_callbacks{
        .queue_samples        = queue_samples,
        .get_frames_remaining = get_frames_remaining,
        .set_frequency        = set_frequency,
    };

    ultramodern::renderer::callbacks_t renderer_callbacks{
        .create_render_context = aero::create_render_context,
    };

    log("[BOOT] Registering overlays (section table)...");
    aero_register_overlays();
    log("[BOOT] Overlays registered OK");

    log("[BOOT] Calling recomp::start()...");
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

    log("[BOOT] recomp::start() returned — shutting down");

#ifdef _WIN32
    timeEndPeriod(1);
#endif

    fflush(stdout);
    if (g_console) fclose(g_console);
    return 0;
}
