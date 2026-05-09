#include <memory>
#include <cstring>
#include <algorithm>
#include <cstdio>
#include <cassert>
#include <cstdlib>

#include "hle/rt64_application.h"
#include "common/rt64_user_configuration.h"

#include "ultramodern/renderer_context.hpp"
#include "ultramodern/config.hpp"
#include "ultramodern/ultra64.h"

static unsigned int MI_INTR_REG     = 0;
static unsigned int DPC_START_REG   = 0;
static unsigned int DPC_END_REG     = 0;
static unsigned int DPC_CURRENT_REG = 0;
static unsigned int DPC_STATUS_REG  = 0;
static unsigned int DPC_CLOCK_REG   = 0;
static unsigned int DPC_BUFBUSY_REG = 0;
static unsigned int DPC_PIPEBUSY_REG= 0;
static unsigned int DPC_TMEM_REG    = 0;

static uint8_t DMEM[0x1000];
static uint8_t IMEM[0x1000];

static void dummy_check_interrupts() {}

static RT64::UserConfiguration::Antialiasing compute_max_aa(RT64::RenderSampleCounts bits) {
    if (bits & RT64::RenderSampleCount::Bits::COUNT_2) {
        if (bits & RT64::RenderSampleCount::Bits::COUNT_4) {
            if (bits & RT64::RenderSampleCount::Bits::COUNT_8) {
                return RT64::UserConfiguration::Antialiasing::MSAA8X;
            }
            return RT64::UserConfiguration::Antialiasing::MSAA4X;
        }
        return RT64::UserConfiguration::Antialiasing::MSAA2X;
    }
    return RT64::UserConfiguration::Antialiasing::None;
}

namespace aero {

class RT64Context final : public ultramodern::renderer::RendererContext {
public:
    RT64Context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
        static unsigned char dummy_rom_header[0x40] = {};

        RT64::Application::Core core{};
#ifdef _WIN32
        core.window = window_handle.window;
#else
        core.window = window_handle;
#endif
        core.checkInterrupts = dummy_check_interrupts;
        core.HEADER  = dummy_rom_header;
        core.RDRAM   = rdram;
        core.DMEM    = DMEM;
        core.IMEM    = IMEM;

        core.MI_INTR_REG      = &MI_INTR_REG;
        core.DPC_START_REG    = &DPC_START_REG;
        core.DPC_END_REG      = &DPC_END_REG;
        core.DPC_CURRENT_REG  = &DPC_CURRENT_REG;
        core.DPC_STATUS_REG   = &DPC_STATUS_REG;
        core.DPC_CLOCK_REG    = &DPC_CLOCK_REG;
        core.DPC_BUFBUSY_REG  = &DPC_BUFBUSY_REG;
        core.DPC_PIPEBUSY_REG = &DPC_PIPEBUSY_REG;
        core.DPC_TMEM_REG     = &DPC_TMEM_REG;

        auto* vi = ultramodern::renderer::get_vi_regs();
        core.VI_STATUS_REG         = &vi->VI_STATUS_REG;
        core.VI_ORIGIN_REG         = &vi->VI_ORIGIN_REG;
        core.VI_WIDTH_REG          = &vi->VI_WIDTH_REG;
        core.VI_INTR_REG           = &vi->VI_INTR_REG;
        core.VI_V_CURRENT_LINE_REG = &vi->VI_V_CURRENT_LINE_REG;
        core.VI_TIMING_REG         = &vi->VI_TIMING_REG;
        core.VI_V_SYNC_REG         = &vi->VI_V_SYNC_REG;
        core.VI_H_SYNC_REG         = &vi->VI_H_SYNC_REG;
        core.VI_LEAP_REG           = &vi->VI_LEAP_REG;
        core.VI_H_START_REG        = &vi->VI_H_START_REG;
        core.VI_V_START_REG        = &vi->VI_V_START_REG;
        core.VI_V_BURST_REG        = &vi->VI_V_BURST_REG;
        core.VI_X_SCALE_REG        = &vi->VI_X_SCALE_REG;
        core.VI_Y_SCALE_REG        = &vi->VI_Y_SCALE_REG;

        RT64::ApplicationConfiguration config;
        config.useConfigurationFile = false;

        app = std::make_unique<RT64::Application>(core, config);

        app->userConfig.developerMode = developer_mode;
        app->userConfig.displayBuffering = RT64::UserConfiguration::DisplayBuffering::Triple;
        app->enhancementConfig.f3dex.forceBranch = true;
        app->enhancementConfig.textureLOD.scale  = true;

#ifdef _WIN32
        setup_result = map_result(app->setup(window_handle.thread_id));
#else
        setup_result = map_result(app->setup(0));
#endif
        chosen_api = map_api(app->chosenGraphicsAPI);

        if (setup_result != ultramodern::renderer::SetupResult::Success) {
            fprintf(stderr, "RT64 setup failed: %d\n", (int)setup_result);
            app = nullptr;
        }
    }

    ~RT64Context() override = default;

    bool valid() override { return static_cast<bool>(app); }

    bool update_config(const ultramodern::renderer::GraphicsConfig& old_cfg,
                       const ultramodern::renderer::GraphicsConfig& new_cfg) override {
        if (old_cfg == new_cfg) return false;
        if (new_cfg.wm_option != old_cfg.wm_option) {
            app->setFullScreen(new_cfg.wm_option == ultramodern::renderer::WindowMode::Fullscreen);
        }
        app->updateUserConfig(true);
        if (new_cfg.msaa_option != old_cfg.msaa_option) {
            app->updateMultisampling();
        }
        return true;
    }

    void enable_instant_present() override {
        app->enhancementConfig.presentation.mode =
            RT64::EnhancementConfiguration::Presentation::Mode::PresentEarly;
        app->updateEnhancementConfig();
    }

    void send_dl(const OSTask* task) override {
        app->state->rsp->reset();
        app->interpreter->loadUCodeGBI(task->t.ucode & 0x3FFFFFF,
                                       task->t.ucode_data & 0x3FFFFFF, true);
        app->processDisplayLists(app->core.RDRAM,
                                 task->t.data_ptr & 0x3FFFFFF, 0, true);
    }

    void update_screen() override { app->updateScreen(); }

    void shutdown() override { if (app) app->end(); }

    uint32_t get_display_framerate() const override {
        return app->presentQueue->ext.sharedResources->swapChainRate;
    }

    float get_resolution_scale() const override {
        constexpr int refH = 240;
        if (app->userConfig.resolution == RT64::UserConfiguration::Resolution::WindowIntegerScale) {
            auto h = app->sharedQueueResources->swapChainHeight;
            return h > 0 ? (std::max)(float((h + refH - 1) / refH), 1.0f) : 1.0f;
        }
        if (app->userConfig.resolution == RT64::UserConfiguration::Resolution::Manual) {
            return float(app->userConfig.resolutionMultiplier);
        }
        return 1.0f;
    }

private:
    std::unique_ptr<RT64::Application> app;

    static ultramodern::renderer::SetupResult map_result(RT64::Application::SetupResult r) {
        switch (r) {
            case RT64::Application::SetupResult::Success:                  return ultramodern::renderer::SetupResult::Success;
            case RT64::Application::SetupResult::DynamicLibrariesNotFound: return ultramodern::renderer::SetupResult::DynamicLibrariesNotFound;
            case RT64::Application::SetupResult::InvalidGraphicsAPI:       return ultramodern::renderer::SetupResult::InvalidGraphicsAPI;
            case RT64::Application::SetupResult::GraphicsAPINotFound:      return ultramodern::renderer::SetupResult::GraphicsAPINotFound;
            case RT64::Application::SetupResult::GraphicsDeviceNotFound:   return ultramodern::renderer::SetupResult::GraphicsDeviceNotFound;
        }
        std::abort();
    }

    static ultramodern::renderer::GraphicsApi map_api(RT64::UserConfiguration::GraphicsAPI a) {
        switch (a) {
            case RT64::UserConfiguration::GraphicsAPI::D3D12:     return ultramodern::renderer::GraphicsApi::D3D12;
            case RT64::UserConfiguration::GraphicsAPI::Vulkan:    return ultramodern::renderer::GraphicsApi::Vulkan;
            case RT64::UserConfiguration::GraphicsAPI::Metal:     return ultramodern::renderer::GraphicsApi::Metal;
            case RT64::UserConfiguration::GraphicsAPI::Automatic: return ultramodern::renderer::GraphicsApi::Auto;
        }
        std::abort();
    }
};

std::unique_ptr<ultramodern::renderer::RendererContext>
create_render_context(uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
    return std::make_unique<RT64Context>(rdram, window_handle, developer_mode);
}

} // namespace aero
