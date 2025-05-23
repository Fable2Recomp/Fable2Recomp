#include "game_window.h"
#include <SDL3/SDL.h>
#include <gpu/video.h>
#include <os/logger.h>
#include <os/user.h>
#include <os/version.h>
#include <app.h>
#include <sdl_listener.h>
#include <spdlog/spdlog.h>

#ifdef _WIN32
#include <shellscalingapi.h>
#endif

#if defined(IMGUI_ENABLED)
#include <imgui.h>
#include <backends/imgui_impl_sdl3.h>
#endif

bool m_isFullscreenKeyReleased = true;
bool m_isResizing = false;

void GameWindow::Init(const char* sdlVideoDriver)
{
#ifdef __linux__
    SDL_SetHint(SDL_HINT_APP_ID, "Unknown");
#endif

    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
        spdlog::critical("Failed to initialize SDL video: {}", SDL_GetError());
        return;
    }

    const char* videoDriverName = SDL_GetCurrentVideoDriver();
    if (videoDriverName) {
        LOGFN("SDL video driver: \"{}\"", videoDriverName);
    }

#ifdef _WIN32
    SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
#endif

    s_x = Config::WindowX;
    s_y = Config::WindowY;
    s_width = Config::WindowWidth;
    s_height = Config::WindowHeight;

    if (s_x == -1 && s_y == -1) {
        s_x = s_y = SDL_WINDOWPOS_CENTERED;
    }

    if (!IsPositionValid()) {
        GameWindow::ResetDimensions();
    }

    s_pWindow = SDL_CreateWindow("Fable2 Recompiled", s_width, s_height, GetWindowFlags());
    if (!s_pWindow) {
        spdlog::critical("Failed to create SDL window: {}", SDL_GetError());
        return;
    }

    // SDL3: set position separately
    SDL_SetWindowPosition(s_pWindow, s_x, s_y);

    if (IsFullscreen()) {
        SDL_HideCursor();
    }

    SetDisplay(Config::Monitor);
    SetIcon();
    SetTitle();

    SDL_SetWindowMinimumSize(s_pWindow, MIN_WIDTH, MIN_HEIGHT);

    // Optional: if you want to assign to your render system
    // s_renderWindow = ...; <-- fix or remove based on plume's requirements

    SetTitleBarColour();
    SDL_ShowWindow(s_pWindow);
}

const char* GameWindow::GetTitle() {
    if (Config::UseOfficialTitleOnTitleBar) {
        switch (Config::Language) {
            case ELanguage::Japanese:
                return Config::UseAlternateTitle
                    ? "Fable II: 再構築版"
                    : "フェイブル II";
            case ELanguage::French:
                return "Fable II : Recompilé";
            case ELanguage::German:
                return "Fable II: Neukompiliert";
            case ELanguage::Spanish:
                return "Fable II: Recompilado";
            default:
                return "Fable II: Recompiled Edition";
        }
    }

    return "Fable2 Recompiled";
}

void GameWindow::PollEvents() {
    SDL_Event event;

    while (SDL_PollEvent(&event)) {
#if defined(IMGUI_ENABLED)
        if (ImGui::GetCurrentContext()) {
            ImGui_ImplSDL3_ProcessEvent(&event);
        }
#endif

        for (auto* listener : GetEventListeners()) {
            if (listener && listener->OnSDLEvent(&event)) {
                break; // Stop if the event was handled
            }
        }
    }
}

