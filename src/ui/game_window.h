#pragma once

#include <SDL3/SDL.h>
#include <vector>
#include <cstdint>

#include <user/config.h>

#define DEFAULT_WIDTH 1280
#define DEFAULT_HEIGHT 720
#define MIN_WIDTH 640
#define MIN_HEIGHT 480

class GameWindow
{
public:
    // SDL window handle (static inline for C++17+)
    static inline SDL_Window* s_pWindow = nullptr;

    // Window position and size
    static inline int s_x = SDL_WINDOWPOS_CENTERED;
    static inline int s_y = SDL_WINDOWPOS_CENTERED;
    static inline int s_width = DEFAULT_WIDTH;
    static inline int s_height = DEFAULT_HEIGHT;

    // State flags
    static inline bool s_isFocused = true;
    static inline bool s_isIconNight = false;
    static inline bool s_isFullscreenCursorVisible = true;
    static inline bool s_isChangingDisplay = false;

    // Current display index
    static inline int s_display = 0;

public:
    // Initialization and update
    static void Init(const char* sdlVideoDriver = nullptr);
    static void Update();
    static void PollEvents();

    // Icon
    static SDL_Surface* GetIconSurface(void* pIconBmp, size_t iconSize);
    static void SetIcon(void* pIconBmp, size_t iconSize);
    static void SetIcon(bool isNight = false);

    // Title
    static const char* GetTitle();
    static void SetTitle(const char* title = nullptr);
    static void SetTitleBarColour();

    // Window state
    static bool IsFullscreen();
    static void SetFullscreen(bool isEnabled);
    static void SetFullscreenCursorVisibility(bool isVisible);
    static bool IsMaximised();
    static void SetMaximised(bool isEnabled);

    // Dimensions
    static SDL_Rect GetDimensions();
    static void GetSizeInPixels(int* w, int* h);
    static void SetDimensions(int w, int h, int x = SDL_WINDOWPOS_CENTERED, int y = SDL_WINDOWPOS_CENTERED);
    static void ResetDimensions();

    // Display management
    static uint32_t GetWindowFlags();
    static int GetDisplayCount();
    static int GetDisplay();
    static void SetDisplay(int displayIndex);
    static std::vector<SDL_DisplayMode> GetDisplayModes(bool ignoreInvalidModes = true, bool ignoreRefreshRates = true);
    static int FindNearestDisplayMode();
    static bool IsPositionValid();

    // Add these two as static members:
    static bool m_isFullscreenKeyReleased;
    static bool m_isResizing;

    // Add a getter for the SDL_Window pointer:
    static SDL_Window* GetSDLWindow() { return s_pWindow; }
};

