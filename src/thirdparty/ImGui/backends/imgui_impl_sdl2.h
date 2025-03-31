// dear imgui: Platform Backend for SDL2
// This needs to be used along with a Renderer (e.g. DirectX11, OpenGL3, Vulkan..)
// (Info: SDL2 is a cross-platform general purpose library for handling windows, inputs, graphics context creation, etc.)

// Implemented features:
//  [X] Platform: Clipboard support.
//  [X] Platform: Mouse support. Can discriminate Mouse/TouchScreen.
//  [X] Platform: Keyboard support. Since 1.87 we are using the io.AddKeyEvent() function. Pass ImGuiKey values to all key functions e.g. ImGui::IsKeyPressed(ImGuiKey_Space). [Legacy SDL_SCANCODE_* values are obsolete since 1.87 and not supported since 1.91.5]
//  [X] Platform: Gamepad support. Enabled with 'io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad'.
//  [X] Platform: Mouse cursor shape and visibility (ImGuiBackendFlags_HasMouseCursors). Disable with 'io.ConfigFlags |= ImGuiConfigFlags_NoMouseCursorChange'.
//  [X] Platform: Basic IME support. App needs to call 'SDL_SetHint(SDL_HINT_IME_SHOW_UI, "1");' before SDL_CreateWindow()!.

// You can use unmodified imgui_impl_* files in your project. See examples/ folder for examples of using this.
// Prefer including the entire imgui/ repository into your project (either as a copy or as a submodule), and only build the backends you need.
// Learn about Dear ImGui:
// - FAQ                  https://dearimgui.com/faq
// - Getting Started      https://dearimgui.com/getting-started
// - Documentation        https://dearimgui.com/docs (same as your local docs/ folder).
// - Introduction, links and more at the top of imgui.cpp

#pragma once

#include "../imgui.h"      // IMGUI_IMPL_API
#include "../imgui_internal.h"
#include <SDL2/SDL.h>

struct SDL_Window;
struct SDL_Renderer;
typedef struct _SDL_GameController SDL_GameController;

#ifndef IMGUI_DISABLE

// Backend API
IMGUI_IMPL_API bool     ImGui_ImplSDL2_Init(SDL_Window* window, void* sdl_gl_context);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForVulkan(SDL_Window* window);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForD3D(SDL_Window* window);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForMetal(SDL_Window* window);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForSDLRenderer(SDL_Window* window, SDL_Renderer* renderer);
IMGUI_IMPL_API bool     ImGui_ImplSDL2_InitForOther(SDL_Window* window);
IMGUI_IMPL_API void     ImGui_ImplSDL2_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplSDL2_NewFrame();
IMGUI_IMPL_API bool     ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event);

// Gamepad selection mode
enum ImGui_ImplSDL2_GamepadMode
{
    ImGui_ImplSDL2_GamepadMode_AutoFirst,  // Use first gamepad that's detected
    ImGui_ImplSDL2_GamepadMode_AutoAll,    // Use all gamepads that are detected
    ImGui_ImplSDL2_GamepadMode_Manual      // Use specific gamepads set with SetGamepadManual
};

// Internal data
struct ImGui_ImplSDL2_Data
{
    SDL_Window*     Window;
    Uint32         WindowID;
    SDL_Renderer*  Renderer;
    Uint64         Time;
    Uint32         MouseWindowID;
    bool           MouseCanUseGlobalState;
    bool           MousePressed[5];
    SDL_Cursor*    MouseCursors[ImGui::ImGuiMouseCursor_COUNT];
    SDL_Cursor*    MouseLastCursor;
    int            MouseButtonsDown;
    int            MouseLastLeaveFrame;
    char*          ClipboardTextData;
    bool           UseVulkan;
    bool           MouseCanReportHoveredViewport;

    // Gamepad handling
    ImGui_ImplSDL2_GamepadMode    GamepadMode;
    bool                          WantUpdateGamepadsList;
    SDL_GameController**          GamepadsList;
    int                          GamepadsCount;

    ImGui_ImplSDL2_Data() { memset((void*)this, 0, sizeof(*this)); }
};

// Gamepad functions
IMGUI_IMPL_API void ImGui_ImplSDL2_SetGamepadMode(ImGui_ImplSDL2_GamepadMode mode, SDL_GameController** manual_gamepads_array = nullptr, int manual_gamepads_count = 0);

#endif // #ifndef IMGUI_DISABLE
