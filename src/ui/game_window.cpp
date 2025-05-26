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

void GameWindow::Init(const char* sdlVideoDriver)
{
#ifdef __linux__
    SDL_SetHint(SDL_HINT_APP_ID, "Unknown");
#endif

    if (sdlVideoDriver && *sdlVideoDriver != '\0') {
#ifdef _WIN32
        // Windows
        _putenv_s("SDL_VIDEODRIVER", sdlVideoDriver);
#else
        // Linux/macOS/Unix
        setenv("SDL_VIDEODRIVER", sdlVideoDriver, 1);
#endif
    }

    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0) {
        spdlog::critical("Failed to initialize SDL video subsystem: {}", SDL_GetError());
        return;
    }

#ifdef _WIN32
    SetProcessDpiAwareness(PROCESS_PER_MONITOR_DPI_AWARE);
#endif

    if (GameWindow::s_x == -1 && GameWindow::s_y == -1) {
        GameWindow::s_x = GameWindow::s_y = SDL_WINDOWPOS_CENTERED_DISPLAY(0); // 0 = primary display
    }

    if (!GameWindow::IsPositionValid()) {
        GameWindow::ResetDimensions();
    }

    // Create window properties object to specify size, position and flags at creation
    SDL_PropertiesID props = SDL_CreateProperties();

    SDL_SetStringProperty(props, SDL_PROP_WINDOW_CREATE_TITLE_STRING, "Fable2 Recompiled");
    SDL_SetNumberProperty(props, SDL_PROP_WINDOW_CREATE_WIDTH_NUMBER, GameWindow::s_width);
    SDL_SetNumberProperty(props, SDL_PROP_WINDOW_CREATE_HEIGHT_NUMBER, GameWindow::s_height);
    SDL_SetNumberProperty(props, SDL_PROP_WINDOW_CREATE_X_NUMBER, GameWindow::s_x);
    SDL_SetNumberProperty(props, SDL_PROP_WINDOW_CREATE_Y_NUMBER, GameWindow::s_y);
    SDL_SetNumberProperty(props, SDL_PROP_WINDOW_CREATE_FLAGS_NUMBER, GameWindow::GetWindowFlags());

    GameWindow::s_pWindow = SDL_CreateWindowWithProperties(props);
    SDL_DestroyProperties(props);

    if (!GameWindow::s_pWindow) {
        spdlog::critical("Failed to create SDL window: {}", SDL_GetError());
        return;
    }

    if (GameWindow::IsFullscreen()) {
        SDL_HideCursor();
    }

    GameWindow::SetDisplay(Config::Monitor);
    GameWindow::SetIcon();
    GameWindow::SetTitle();

    SDL_SetWindowMinimumSize(GameWindow::s_pWindow, MIN_WIDTH, MIN_HEIGHT);

    GameWindow::SetTitleBarColour();
    SDL_ShowWindow(GameWindow::s_pWindow);
}

void GameWindow::PollEvents()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
#if defined(IMGUI_ENABLED)
        if (ImGui::GetCurrentContext()) {
            ImGui_ImplSDL3_ProcessEvent(&event);
        }
#endif

        for (auto* listener : GetEventListeners()) {
            if (listener && listener->OnSDLEvent(&event)) {
                break; // Event handled
            }
        }
    }
}

const char* GameWindow::GetTitle()
{
    if (Config::UseOfficialTitleOnTitleBar) {
        switch (Config::Language) {
            case ELanguage::Japanese:
                return Config::UseAlternateTitle ? "Fable II: 再構築版" : "フェイブル II";
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

void GameWindow::SetTitle(const char* title)
{
    if (!title)
        title = GameWindow::GetTitle();

    if (GameWindow::s_pWindow) {
        SDL_SetWindowTitle(GameWindow::s_pWindow, title);
    }
}

void GameWindow::SetTitleBarColour()
{
#ifdef _WIN32
    // Windows-specific title bar color code here (optional)
#endif
}

void GameWindow::SetIcon(bool isNight)
{
    if (!GameWindow::s_pWindow) return;

    spdlog::info("SetIcon() called - implement icon loading");
}

bool GameWindow::IsFullscreen()
{
    // You can track your own fullscreen flag or query actual window state:
    // SDL_WindowFullscreenMode returns nullptr if in desktop fullscreen (borderless)
    const SDL_DisplayMode* mode = SDL_GetWindowFullscreenMode(GameWindow::s_pWindow);
    if (!mode)
        return SDL_GetWindowFlags(GameWindow::s_pWindow) & SDL_WINDOW_FULLSCREEN; // fallback
    return true;
}

void GameWindow::SetFullscreen(bool isEnabled)
{
    if (GameWindow::IsFullscreen() == isEnabled)
        return;

    if (!GameWindow::s_pWindow)
        return;

    if (isEnabled) {
        // To use exclusive fullscreen, select an appropriate display mode or pass nullptr for desktop fullscreen
        SDL_SetWindowFullscreenMode(GameWindow::s_pWindow, nullptr); // desktop fullscreen (borderless)
        SDL_HideCursor();
    } else {
        SDL_SetWindowFullscreenMode(GameWindow::s_pWindow, nullptr); // disables fullscreen mode
        SDL_ShowCursor();
        SDL_SetWindowSize(GameWindow::s_pWindow, GameWindow::s_width, GameWindow::s_height);
        SDL_SetWindowPosition(GameWindow::s_pWindow, GameWindow::s_x, GameWindow::s_y);
    }
}

bool GameWindow::IsPositionValid()
{
    int displayCount = GameWindow::GetDisplayCount();
    if (displayCount <= 0)
        return false;

    SDL_Rect windowRect{ GameWindow::s_x, GameWindow::s_y, GameWindow::s_width, GameWindow::s_height };

    int numDisplays = 0;
    SDL_DisplayID* displays = SDL_GetDisplays(&numDisplays);
    if (!displays)
        return false;

    bool intersects = false;
    for (int i = 0; i < numDisplays; ++i) {
        SDL_Rect displayBounds;
        if (SDL_GetDisplayBounds(displays[i], &displayBounds) == 0) {
            if (SDL_HasRectIntersection(&windowRect, &displayBounds)) {
                intersects = true;
                break;
            }
        }
    }

    SDL_free(displays);
    return intersects;
}

void GameWindow::ResetDimensions()
{
    GameWindow::s_width = DEFAULT_WIDTH;
    GameWindow::s_height = DEFAULT_HEIGHT;
    GameWindow::s_x = SDL_WINDOWPOS_CENTERED_DISPLAY(0);
    GameWindow::s_y = SDL_WINDOWPOS_CENTERED_DISPLAY(0);
}

uint32_t GameWindow::GetWindowFlags()
{
    uint32_t flags = SDL_WINDOW_RESIZABLE;
    if (GameWindow::IsFullscreen()) {
        flags |= SDL_WINDOW_FULLSCREEN; // Note: SDL_WINDOW_FULLSCREEN_DESKTOP removed in SDL3
    }
    return flags;
}

void GameWindow::SetDimensions(int w, int h, int x, int y)
{
    GameWindow::s_width = w;
    GameWindow::s_height = h;
    GameWindow::s_x = x;
    GameWindow::s_y = y;

    if (GameWindow::s_pWindow) {
        SDL_SetWindowSize(GameWindow::s_pWindow, w, h);
        SDL_SetWindowPosition(GameWindow::s_pWindow, x, y);
    }
}

int GameWindow::GetDisplayCount()
{
    int numDisplays = 0;
    SDL_DisplayID* displays = SDL_GetDisplays(&numDisplays);
    if (displays) {
        SDL_free(displays);
        return numDisplays;
    }
    return 0;
}

int GameWindow::GetDisplay()
{
    return GameWindow::s_display;
}

void GameWindow::SetDisplay(int displayIndex)
{
    int displayCount = GameWindow::GetDisplayCount();
    if (displayIndex < 0 || displayIndex >= displayCount)
        displayIndex = 0;

    GameWindow::s_isChangingDisplay = true;
    GameWindow::s_display = displayIndex;
    GameWindow::s_isChangingDisplay = false;

    if (!GameWindow::s_pWindow)
        return;

    int numDisplays = 0;
    SDL_DisplayID* displays = SDL_GetDisplays(&numDisplays);
    if (!displays)
        return;

    if (displayIndex >= 0 && displayIndex < numDisplays) {
        SDL_Rect bounds;
        if (SDL_GetDisplayBounds(displays[displayIndex], &bounds) == 0) {
            SDL_SetWindowPosition(GameWindow::s_pWindow, bounds.x + 100, bounds.y + 100);
        }
    }

    SDL_free(displays);
}

int GameWindow::FindNearestDisplayMode()
{
    int displayCount = GameWindow::GetDisplayCount();
    if (displayCount <= 0)
        return 0;

    int numDisplays = 0;
    SDL_DisplayID* displays = SDL_GetDisplays(&numDisplays);
    if (!displays) return 0;

    int displayIndex = GameWindow::s_display;
    if (displayIndex < 0 || displayIndex >= numDisplays) {
        displayIndex = 0;
    }

    int numModes = 0;
    SDL_DisplayMode** modes = SDL_GetFullscreenDisplayModes(displays[displayIndex], &numModes);
    if (!modes || numModes <= 0) {
        SDL_free(displays);
        return 0;
    }

    int bestIndex = 0;
    int bestDiff = INT_MAX;
    for (int i = 0; i < numModes; ++i) {
        SDL_DisplayMode* mode = modes[i];
        int diff = abs(mode->w - GameWindow::s_width) + abs(mode->h - GameWindow::s_height);
        if (diff < bestDiff) {
            bestDiff = diff;
            bestIndex = i;
        }
    }

    SDL_free(modes);
    SDL_free(displays);
    return bestIndex;
}

std::vector<SDL_DisplayMode> GameWindow::GetDisplayModes(bool ignoreInvalidModes, bool ignoreRefreshRates)
{
    std::vector<SDL_DisplayMode> modes;

    int numDisplays = 0;
    SDL_DisplayID* displays = SDL_GetDisplays(&numDisplays);
    if (!displays || numDisplays <= 0) {
        return modes;
    }

    int displayIndex = GameWindow::s_display;
    if (displayIndex < 0 || displayIndex >= numDisplays) {
        displayIndex = 0;
    }

    int numModes = 0;
    SDL_DisplayMode** modesPtr = SDL_GetFullscreenDisplayModes(displays[displayIndex], &numModes);
    if (!modesPtr || numModes <= 0) {
        SDL_free(displays);
        return modes;
    }

    for (int i = 0; i < numModes; ++i) {
        SDL_DisplayMode* mode = modesPtr[i];
        // Optional filtering based on ignoreInvalidModes, ignoreRefreshRates could be added here
        modes.push_back(*mode);
    }

    SDL_free(modesPtr);
    SDL_free(displays);

    std::sort(modes.begin(), modes.end(), [](const SDL_DisplayMode& a, const SDL_DisplayMode& b) {
        return (a.w * a.h) < (b.w * b.h);
    });

    return modes;
}

void GameWindow::Update()
{
    GameWindow::PollEvents();
}

