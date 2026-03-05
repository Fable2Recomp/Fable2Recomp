// Fable2 - ReXGlue Recompiled Project
// Full-form WindowedApp (custom content paths + native heap)

#include "generated/Fable2_config.h"
#include "generated/Fable2_init.h"
#include "heap.h"

#include <rex/cvar.h>
#include <rex/filesystem.h>
#include <rex/log_capture.h>
#include <rex/logging.h>
#include <rex/runtime.h>
#include <rex/graphics/graphics_system.h>
#if REX_HAS_D3D12
#include <rex/graphics/d3d12/graphics_system.h>
#endif
#if REX_HAS_VULKAN
#include <rex/graphics/vulkan/graphics_system.h>
#endif
#include <rex/audio/audio_system.h>
#include <rex/audio/sdl/sdl_audio_system.h>
#include <rex/input/input_system.h>
#include <rex/system/kernel_state.h>
#include <rex/system/xthread.h>
#include <rex/ui/graphics_provider.h>
#include <rex/ui/immediate_drawer.h>
#include <rex/ui/imgui_drawer.h>
#include <rex/ui/keybinds.h>
#include <rex/ui/overlay/console_overlay.h>
#include <rex/ui/overlay/debug_overlay.h>
#include <rex/ui/overlay/settings_overlay.h>
#include <rex/ui/window.h>
#include <rex/ui/window_listener.h>
#include <rex/ui/windowed_app.h>

#include <atomic>
#include <filesystem>
#include <thread>

class Fable2App : public rex::ui::WindowedApp,
                 public rex::ui::WindowListener,
                 public rex::ui::WindowInputListener {
 public:
  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::make_unique<Fable2App>(ctx);
  }

  Fable2App(rex::ui::WindowedAppContext& ctx)
      : WindowedApp(ctx, "Fable2", "[game_directory]") {
    AddPositionalOption("game_directory");
  }

  bool OnInitialize() override {
    auto exe_dir = rex::filesystem::GetExecutableFolder();

    // Assets root: arg or default to exe_dir/assets
    std::filesystem::path assets_root;
    if (auto arg = GetArgument("game_directory")) {
      assets_root = *arg;
    } else {
      assets_root = exe_dir / "assets";
    }
    auto game_dir = assets_root / "game";
    auto update_dir = assets_root / "update";

    // Logging setup from CVARs
    std::string log_file_cvar = REXCVAR_GET(log_file);
    std::string log_level_str = REXCVAR_GET(log_level);
    if (REXCVAR_GET(log_verbose) && log_level_str == "info") {
      log_level_str = "trace";
    }
    auto log_config = rex::BuildLogConfig(
        log_file_cvar.empty() ? nullptr : log_file_cvar.c_str(),
        log_level_str, {});
    rex::InitLogging(log_config);
    rex::RegisterLogLevelCallback();

    // Log capture sink for console overlay
    log_sink_ = std::make_shared<rex::LogCaptureSink>();
    for (size_t i = 0; i < static_cast<size_t>(rex::LogCategory::Count); ++i) {
      auto logger = rex::GetLogger(static_cast<rex::LogCategory>(i));
      if (logger) {
        logger->sinks().push_back(log_sink_);
      }
    }

    REXLOG_INFO("Fable2 starting");
    REXLOG_INFO("  Game directory: {}", game_dir.string());
    REXLOG_INFO("  Update directory: {}", update_dir.string());

    // Create runtime with custom content paths
    runtime_ = std::make_unique<rex::Runtime>(game_dir, game_dir, update_dir);
    runtime_->set_app_context(&app_context());

    // Build runtime config with platform backends
    rex::RuntimeConfig config;
#if REX_HAS_D3D12
    config.graphics = REX_GRAPHICS_BACKEND(rex::graphics::d3d12::D3D12GraphicsSystem);
#elif REX_HAS_VULKAN
    config.graphics = REX_GRAPHICS_BACKEND(rex::graphics::vulkan::VulkanGraphicsSystem);
#endif
    config.audio_factory = REX_AUDIO_BACKEND(rex::audio::sdl::SDLAudioSystem);
    config.input_factory = REX_INPUT_BACKEND(rex::input::CreateDefaultInputSystem);

    auto status = runtime_->Setup(
        static_cast<uint32_t>(PPC_CODE_BASE),
        static_cast<uint32_t>(PPC_CODE_SIZE),
        static_cast<uint32_t>(PPC_IMAGE_BASE),
        static_cast<uint32_t>(PPC_IMAGE_SIZE),
        PPCFuncMappings,
        std::move(config));
    if (XFAILED(status)) {
      REXLOG_ERROR("Runtime setup failed: {:08X}", status);
      return false;
    }

    // Initialize native heap (replaces game's physical memory allocator with dlmalloc)
    if (!lh::InitNativeHeap()) {
      REXLOG_ERROR("Failed to initialize native heap");
      return false;
    }

    // Load XEX image
    status = runtime_->LoadXexImage("game:\\default.xex");
    if (XFAILED(status)) {
      REXLOG_ERROR("Failed to load XEX: {:08X}", status);
      return false;
    }

    // Create window
    window_ = rex::ui::Window::Create(app_context(), "Fable2", 1280, 720);
    if (!window_) {
      REXLOG_ERROR("Failed to create window");
      return false;
    }

    window_->AddListener(this);
    window_->AddInputListener(this, 0);
    window_->Open();

    // Setup graphics presenter and ImGui
    auto* graphics_system =
        static_cast<rex::graphics::GraphicsSystem*>(runtime_->graphics_system());
    if (graphics_system && graphics_system->presenter()) {
      auto* presenter = graphics_system->presenter();
      auto* provider = graphics_system->provider();
      if (provider) {
        immediate_drawer_ = provider->CreateImmediateDrawer();
        if (immediate_drawer_) {
          immediate_drawer_->SetPresenter(presenter);
          imgui_drawer_ = std::make_unique<rex::ui::ImGuiDrawer>(window_.get(), 64);
          imgui_drawer_->SetPresenterAndImmediateDrawer(
              presenter, immediate_drawer_.get());

          // Built-in overlays
          debug_overlay_ =
              std::make_unique<rex::ui::DebugOverlayDialog>(imgui_drawer_.get());
          console_overlay_ =
              std::make_unique<rex::ui::ConsoleDialog>(imgui_drawer_.get(), log_sink_);
          settings_overlay_ = std::make_unique<rex::ui::SettingsDialog>(
              imgui_drawer_.get(), exe_dir / "Fable2.toml");

          runtime_->set_display_window(window_.get());
          runtime_->set_imgui_drawer(imgui_drawer_.get());
        }
      }
      window_->SetPresenter(presenter);
    }

    // Launch module in background
    app_context().CallInUIThreadDeferred([this]() {
      auto main_thread = runtime_->LaunchModule();
      if (!main_thread) {
        REXLOG_ERROR("Failed to launch module");
        app_context().QuitFromUIThread();
        return;
      }

      module_thread_ = std::thread(
          [this, main_thread = std::move(main_thread)]() mutable {
            main_thread->Wait(0, 0, 0, nullptr);
            REXLOG_INFO("Execution complete");
            if (!shutting_down_.load(std::memory_order_acquire)) {
              app_context().CallInUIThread(
                  [this]() { app_context().QuitFromUIThread(); });
            }
          });
    });

    return true;
  }

  void OnKeyDown(rex::ui::KeyEvent& e) override {
    rex::ui::ProcessKeyEvent(e);
  }

  void OnClosing(rex::ui::UIEvent& e) override {
    (void)e;
    REXLOG_INFO("Window closing, shutting down...");
    shutting_down_.store(true, std::memory_order_release);
    if (runtime_ && runtime_->kernel_state()) {
      runtime_->kernel_state()->TerminateTitle();
    }
    app_context().QuitFromUIThread();
  }

  void OnDestroy() override {
    settings_overlay_.reset();
    console_overlay_.reset();
    debug_overlay_.reset();
    if (imgui_drawer_) {
      imgui_drawer_->SetPresenterAndImmediateDrawer(nullptr, nullptr);
      imgui_drawer_.reset();
    }
    if (immediate_drawer_) {
      immediate_drawer_->SetPresenter(nullptr);
      immediate_drawer_.reset();
    }
    if (runtime_) {
      runtime_->set_display_window(nullptr);
      runtime_->set_imgui_drawer(nullptr);
    }
    if (window_) {
      window_->SetPresenter(nullptr);
    }
    if (module_thread_.joinable()) {
      module_thread_.join();
    }
    if (window_) {
      window_->RemoveInputListener(this);
      window_->RemoveListener(this);
    }
    window_.reset();
    runtime_.reset();
  }

 private:
  std::unique_ptr<rex::Runtime> runtime_;
  std::unique_ptr<rex::ui::Window> window_;
  std::thread module_thread_;
  std::atomic<bool> shutting_down_{false};
  std::unique_ptr<rex::ui::ImmediateDrawer> immediate_drawer_;
  std::unique_ptr<rex::ui::ImGuiDrawer> imgui_drawer_;
  std::shared_ptr<rex::LogCaptureSink> log_sink_;
  std::unique_ptr<rex::ui::DebugOverlayDialog> debug_overlay_;
  std::unique_ptr<rex::ui::ConsoleDialog> console_overlay_;
  std::unique_ptr<rex::ui::SettingsDialog> settings_overlay_;
};

REX_DEFINE_APP(Fable2, Fable2App::Create)
