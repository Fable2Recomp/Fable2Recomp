// dear imgui: Platform Backend for SDL2
// This needs to be used along with a Renderer (e.g. DirectX11, OpenGL3, Vulkan..)
// (Info: SDL2 is a cross-platform general purpose library for handling windows, inputs, graphics context creation, etc.)
// (Prefer SDL 2.0.5+ for full feature support.)

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

// CHANGELOG
// (minor and older changes stripped away, please see git history for details)
//  2025-03-10: When dealing with OEM keys, use scancodes instead of translated keycodes to choose ImGuiKey values. (#7136, #7201, #7206, #7306, #7670, #7672, #8468)
//  2025-02-26: Only start SDL_CaptureMouse() when mouse is being dragged, to mitigate issues with e.g.Linux debuggers not claiming capture back. (#6410, #3650)
//  2025-02-24: Avoid calling SDL_GetGlobalMouseState() when mouse is in relative mode.
//  2025-02-18: Added ImGuiMouseCursor_Wait and ImGuiMouseCursor_Progress mouse cursor support.
//  2025-02-10: Using SDL_OpenURL() in platform_io.Platform_OpenInShellFn handler.
//  2025-01-20: Made ImGui_ImplSDL2_SetGamepadMode(ImGui_ImplSDL2_GamepadMode_Manual) accept an empty array.
//  2024-10-24: Emscripten: from SDL 2.30.9, SDL_EVENT_MOUSE_WHEEL event doesn't require dividing by 100.0f.
//  2024-09-09: use SDL_Vulkan_GetDrawableSize() when available. (#7967, #3190)
//  2024-08-22: moved some OS/backend related function pointers from ImGuiIO to ImGuiPlatformIO:
//               - io.GetClipboardTextFn    -> platform_io.Platform_GetClipboardTextFn
//               - io.SetClipboardTextFn    -> platform_io.Platform_SetClipboardTextFn
//               - io.PlatformOpenInShellFn -> platform_io.Platform_OpenInShellFn
//               - io.PlatformSetImeDataFn  -> platform_io.Platform_SetImeDataFn
//  2024-08-19: Storing SDL's Uint32 WindowID inside ImGuiViewport::PlatformHandle instead of SDL_Window*.
//  2024-08-19: ImGui_ImplSDL2_ProcessEvent() now ignores events intended for other SDL windows. (#7853)
//  2024-07-02: Emscripten: Added io.PlatformOpenInShellFn() handler for Emscripten versions.
//  2024-07-02: Update for io.SetPlatformImeDataFn() -> io.PlatformSetImeDataFn() renaming in main library.
//  2024-02-14: Inputs: Handle gamepad disconnection. Added ImGui_ImplSDL2_SetGamepadMode().
//  2023-10-05: Inputs: Added support for extra ImGuiKey values: F13 to F24 function keys, app back/forward keys.
//  2023-04-06: Inputs: Avoid calling SDL_StartTextInput()/SDL_StopTextInput() as they don't only pertain to IME. It's unclear exactly what their relation is to IME. (#6306)
//  2023-04-04: Inputs: Added support for io.AddMouseSourceEvent() to discriminate ImGuiMouseSource_Mouse/ImGuiMouseSource_TouchScreen. (#2702)
//  2023-02-23: Accept SDL_GetPerformanceCounter() not returning a monotonically increasing value. (#6189, #6114, #3644)
//  2023-02-07: Implement IME handler (io.SetPlatformImeDataFn will call SDL_SetTextInputRect()/SDL_StartTextInput()).
//  2023-02-07: *BREAKING CHANGE* Renamed this backend file from imgui_impl_sdl.cpp/.h to imgui_impl_sdl2.cpp/.h in prevision for the future release of SDL3.
//  2023-02-02: Avoid calling SDL_SetCursor() when cursor has not changed, as the function is surprisingly costly on Mac with latest SDL (may be fixed in next SDL version).
//  2023-02-02: Added support for SDL 2.0.18+ preciseX/preciseY mouse wheel data for smooth scrolling + Scaling X value on Emscripten (bug?). (#4019, #6096)
//  2023-02-02: Removed SDL_MOUSEWHEEL value clamping, as values seem correct in latest Emscripten. (#4019)
//  2023-02-01: Flipping SDL_MOUSEWHEEL 'wheel.x' value to match other backends and offer consistent horizontal scrolling direction. (#4019, #6096, #1463)
//  2022-10-11: Using 'nullptr' instead of 'NULL' as per our switch to C++11.
//  2022-09-26: Inputs: Disable SDL 2.0.22 new "auto capture" (SDL_HINT_MOUSE_AUTO_CAPTURE) which prevents drag and drop across windows for multi-viewport support + don't capture when drag and dropping. (#5710)
//  2022-09-26: Inputs: Renamed ImGuiKey_ModXXX introduced in 1.87 to ImGuiMod_XXX (old names still supported).
//  2022-03-22: Inputs: Fix mouse position issues when dragging outside of boundaries. SDL_CaptureMouse() erroneously still gives out LEAVE events when hovering OS decorations.
//  2022-03-22: Inputs: Added support for extra mouse buttons (SDL_BUTTON_X1/SDL_BUTTON_X2).
//  2022-02-04: Added SDL_Renderer* parameter to ImGui_ImplSDL2_InitForSDLRenderer(), so we can use SDL_GetRendererOutputSize() instead of SDL_GL_GetDrawableSize() when bound to a SDL_Renderer.
//  2022-01-26: Inputs: replaced short-lived io.AddKeyModsEvent() (added two weeks ago) with io.AddKeyEvent() using ImGuiKey_ModXXX flags. Sorry for the confusion.
//  2021-01-20: Inputs: calling new io.AddKeyAnalogEvent() for gamepad support, instead of writing directly to io.NavInputs[].
//  2022-01-17: Inputs: calling new io.AddMousePosEvent(), io.AddMouseButtonEvent(), io.AddMouseWheelEvent() API (1.87+).
//  2022-01-17: Inputs: always update key mods next and before key event (not in NewFrame) to fix input queue with very low framerates.
//  2022-01-12: Update mouse inputs using SDL_MOUSEMOTION/SDL_WINDOWEVENT_LEAVE + fallback to provide it when focused but not hovered/captured. More standard and will allow us to pass it to future input queue API.
//  2022-01-12: Maintain our own copy of MouseButtonsDown mask instead of using ImGui::IsAnyMouseDown() which will be obsoleted.
//  2022-01-10: Inputs: calling new io.AddKeyEvent(), io.AddKeyModsEvent() + io.SetKeyEventNativeData() API (1.87+). Support for full ImGuiKey range.
//  2021-08-17: Calling io.AddFocusEvent() on SDL_WINDOWEVENT_FOCUS_GAINED/SDL_WINDOWEVENT_FOCUS_LOST.
//  2021-07-29: Inputs: MousePos is correctly reported when the host platform window is hovered but not focused (using SDL_GetMouseFocus() + SDL_HINT_MOUSE_FOCUS_CLICKTHROUGH, requires SDL 2.0.5+)
//  2021-06-29: *BREAKING CHANGE* Removed 'SDL_Window* window' parameter to ImGui_ImplSDL2_NewFrame() which was unnecessary.
//  2021-06-29: Reorganized backend to pull data from a single structure to facilitate usage with multiple-contexts (all g_XXXX access changed to bd->XXXX).
//  2021-03-22: Rework global mouse pos availability check listing supported platforms explicitly, effectively fixing mouse access on Raspberry Pi. (#2837, #3950)
//  2020-05-25: Misc: Report a zero display-size when window is minimized, to be consistent with other backends.
//  2020-02-20: Inputs: Fixed mapping for ImGuiKey_KeyPadEnter (using SDL_SCANCODE_KP_ENTER instead of SDL_SCANCODE_RETURN2).
//  2019-12-17: Inputs: On Wayland, use SDL_GetMouseState (because there is no global mouse state).
//  2019-12-05: Inputs: Added support for ImGuiMouseCursor_NotAllowed mouse cursor.
//  2019-07-21: Inputs: Added mapping for ImGuiKey_KeyPadEnter.
//  2019-04-23: Inputs: Added support for SDL_GameController (if ImGuiConfigFlags_NavEnableGamepad is set by user application).
//  2019-03-12: Misc: Preserve DisplayFramebufferScale when main window is minimized.
//  2018-12-21: Inputs: Workaround for Android/iOS which don't seem to handle focus related calls.
//  2018-11-30: Misc: Setting up io.BackendPlatformName so it can be displayed in the About Window.
//  2018-11-14: Changed the signature of ImGui_ImplSDL2_ProcessEvent() to take a 'const SDL_Event*'.
//  2018-08-01: Inputs: Workaround for Emscripten which doesn't seem to handle focus related calls.
//  2018-06-29: Inputs: Added support for the ImGuiMouseCursor_Hand cursor.
//  2018-06-08: Misc: Extracted imgui_impl_sdl.cpp/.h away from the old combined SDL2+OpenGL/Vulkan examples.
//  2018-06-08: Misc: ImGui_ImplSDL2_InitForOpenGL() now takes a SDL_GLContext parameter.
//  2018-05-09: Misc: Fixed clipboard paste memory leak (we didn't call SDL_FreeMemory on the data returned by SDL_GetClipboardText).
//  2018-03-20: Misc: Setup io.BackendFlags ImGuiBackendFlags_HasMouseCursors flag + honor ImGuiConfigFlags_NoMouseCursorChange flag.
//  2018-02-16: Inputs: Added support for mouse cursors, honoring ImGui::GetMouseCursor() value.
//  2018-02-06: Misc: Removed call to ImGui::Shutdown() which is not available from 1.60 WIP, user needs to call CreateContext/DestroyContext themselves.
//  2018-02-06: Inputs: Added mapping for ImGuiKey_Space.
//  2018-02-05: Misc: Using SDL_GetPerformanceCounter() instead of SDL_GetTicks() to be able to handle very high framerate (1000+ FPS).
//  2018-02-05: Inputs: Keyboard mapping is using scancodes everywhere instead of a confusing mixture of keycodes and scancodes.
//  2018-01-20: Inputs: Added Horizontal Mouse Wheel support.
//  2018-01-19: Inputs: When available (SDL 2.0.4+) using SDL_CaptureMouse() to retrieve coordinates outside of client area when dragging. Otherwise (SDL 2.0.3 and before) testing for SDL_WINDOW_INPUT_FOCUS instead of SDL_WINDOW_MOUSE_FOCUS.
//  2018-01-18: Inputs: Added mapping for ImGuiKey_Insert.
//  2017-08-25: Inputs: MousePos set to -FLT_MAX,-FLT_MAX when mouse is unavailable/missing (instead of -1,-1).
//  2016-10-15: Misc: Added a void* user_data parameter to Clipboard function handlers.

#ifndef IMGUI_DISABLE

#if defined(_MSC_VER) && _MSC_VER <= 1500 // MSVC 2008 or earlier
#include <stddef.h>     // intptr_t
#else
#include <stdint.h>     // intptr_t
#endif

#include "imgui_impl_sdl2.h"
#include "../imgui.h"
#include "../imgui_internal.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_syswm.h>
#ifdef __APPLE__
#include <TargetConditionals.h>
#endif
#ifdef __EMSCRIPTEN__
#include <emscripten/em_js.h>
#endif

#if SDL_VERSION_ATLEAST(2,0,4) && !defined(__EMSCRIPTEN__) && !defined(__ANDROID__) && !(defined(__APPLE__) && TARGET_OS_IOS) && !defined(__amigaos4__)
#define SDL_HAS_CAPTURE_AND_GLOBAL_MOUSE    1
#else
#define SDL_HAS_CAPTURE_AND_GLOBAL_MOUSE    0
#endif
#define SDL_HAS_VULKAN                      SDL_VERSION_ATLEAST(2,0,6)
#define SDL_HAS_OPEN_URL                    SDL_VERSION_ATLEAST(2,0,14)
#if SDL_HAS_VULKAN
#include <SDL_vulkan.h>
#endif

// SDL Data
#define SDL_HAS_CAPTURE_AND_GLOBAL_MOUSE    SDL_VERSION_ATLEAST(2,0,4)
#define SDL_HAS_VULKAN                      SDL_VERSION_ATLEAST(2,0,6)
#define SDL_HAS_OPEN_URL                    SDL_VERSION_ATLEAST(2,0,14)

// Forward declare key mapping function
static ImGui::ImGuiKey ImGui_ImplSDL2_KeycodeToImGuiKey(int keycode);

// Backend data stored in io.BackendPlatformUserData to allow support for multiple Dear ImGui contexts
static ImGui_ImplSDL2_Data* ImGui_ImplSDL2_GetBackendData()
{
    return ImGui::GetCurrentContext() ? (ImGui_ImplSDL2_Data*)ImGui::GetIO().BackendPlatformUserData : nullptr;
}

// Functions
static const char* ImGui_ImplSDL2_GetClipboardText(void*)
{
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    if (bd->ClipboardTextData)
        SDL_free(bd->ClipboardTextData);
    bd->ClipboardTextData = SDL_GetClipboardText();
    return bd->ClipboardTextData;
}

static void ImGui_ImplSDL2_SetClipboardText(void*, const char* text)
{
    SDL_SetClipboardText(text);
}

static void ImGui_ImplSDL2_UpdateMouseData()
{
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    ImGui::ImGuiIO& io = ImGui::GetIO();

    // We forward mouse input when hovered or captured (via SDL_MOUSEMOTION) or when focused (below)
    const bool is_app_focused = (SDL_GetWindowFlags(bd->Window) & SDL_WINDOW_INPUT_FOCUS) != 0;
    if (is_app_focused)
    {
        // (Optional) Set OS mouse position from Dear ImGui if requested (rarely used, only when io.ConfigNavMoveSetMousePos is enabled by user)
        if (io.WantSetMousePos)
            SDL_WarpMouseInWindow(bd->Window, (int)io.MousePos.x, (int)io.MousePos.y);

        // (Optional) Fallback to provide mouse position when focused (SDL_MOUSEMOTION already provides this when hovered or captured)
        if (bd->MouseCanUseGlobalState && bd->MouseButtonsDown == 0)
        {
            int window_x, window_y, mouse_x_global, mouse_y_global;
            SDL_GetGlobalMouseState(&mouse_x_global, &mouse_y_global);
            SDL_GetWindowPosition(bd->Window, &window_x, &window_y);
            io.AddMousePosEvent((float)(mouse_x_global - window_x), (float)(mouse_y_global - window_y));
        }
    }
}

static void ImGui_ImplSDL2_UpdateMouseCursor()
{
    ImGui::ImGuiIO& io = ImGui::GetIO();
    if (io.ConfigFlags & ImGui::ImGuiConfigFlags_NoMouseCursorChange)
        return;
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();

    ImGui::ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (io.MouseDrawCursor || imgui_cursor == ImGui::ImGuiMouseCursor_None)
    {
        // Hide OS mouse cursor if imgui is drawing it or if it wants no cursor
        SDL_ShowCursor(SDL_FALSE);
    }
    else
    {
        // Show OS mouse cursor
        SDL_Cursor* expected_cursor = bd->MouseCursors[imgui_cursor] ? bd->MouseCursors[imgui_cursor] : bd->MouseCursors[ImGui::ImGuiMouseCursor_Arrow];
        if (bd->MouseLastCursor != expected_cursor)
        {
            SDL_SetCursor(expected_cursor);
            bd->MouseLastCursor = expected_cursor;
        }
        SDL_ShowCursor(SDL_TRUE);
    }
}

static void ImGui_ImplSDL2_CloseGamepads()
{
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    if (bd->GamepadMode != ImGui_ImplSDL2_GamepadMode_Manual)
    {
        for (int i = 0; i < bd->GamepadsCount; i++)
            SDL_GameControllerClose(bd->GamepadsList[i]);
        free(bd->GamepadsList);
        bd->GamepadsList = nullptr;
        bd->GamepadsCount = 0;
    }
}

void ImGui_ImplSDL2_SetGamepadMode(ImGui_ImplSDL2_GamepadMode mode, SDL_GameController** manual_gamepads_array, int manual_gamepads_count)
{
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    ImGui_ImplSDL2_CloseGamepads();
    
    if (mode == ImGui_ImplSDL2_GamepadMode_Manual)
    {
        if (manual_gamepads_count > 0)
        {
            bd->GamepadsList = (SDL_GameController**)malloc(sizeof(SDL_GameController*) * manual_gamepads_count);
            memcpy(bd->GamepadsList, manual_gamepads_array, sizeof(SDL_GameController*) * manual_gamepads_count);
            bd->GamepadsCount = manual_gamepads_count;
        }
    }
    bd->GamepadMode = mode;
}

bool ImGui_ImplSDL2_Init(SDL_Window* window, void* sdl_gl_context)
{
    ImGui::ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.BackendPlatformUserData == nullptr && "Already initialized a platform backend!");

    // Setup backend capabilities flags
    ImGui_ImplSDL2_Data* bd = IM_NEW(ImGui_ImplSDL2_Data)();
    io.BackendPlatformUserData = (void*)bd;
    io.BackendPlatformName = "imgui_impl_sdl2";
    io.BackendFlags |= ImGui::ImGuiBackendFlags_HasMouseCursors;
    io.BackendFlags |= ImGui::ImGuiBackendFlags_HasSetMousePos;

    bd->Window = window;
    bd->Time = 0;

    // Setup platform/renderer bindings
    ImGui::GetPlatformIO().Platform_GetClipboardText = ImGui_ImplSDL2_GetClipboardText;
    ImGui::GetPlatformIO().Platform_SetClipboardText = ImGui_ImplSDL2_SetClipboardText;

    // Load mouse cursors
    bd->MouseCursors[ImGui::ImGuiMouseCursor_Arrow] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_ARROW);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_TextInput] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_IBEAM);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeAll] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEALL);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeNS] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENS);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeEW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEWE);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeNESW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENESW);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeNWSE] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENWSE);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_Hand] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_NotAllowed] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_NO);

    // Check and store if we are on a SDL backend that supports global mouse position
    bd->MouseCanUseGlobalState = true;

    return true;
}

bool ImGui_ImplSDL2_InitForOpenGL(SDL_Window* window, void* sdl_gl_context)
{
    return ImGui_ImplSDL2_Init(window, sdl_gl_context);
}

bool ImGui_ImplSDL2_InitForVulkan(SDL_Window* window)
{
    if (!ImGui_ImplSDL2_Init(window, nullptr))
        return false;
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    bd->UseVulkan = true;
    return true;
}

void ImGui_ImplSDL2_Shutdown()
{
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    IM_ASSERT(bd != nullptr && "No platform backend to shutdown, or already shutdown?");
    ImGui::ImGuiIO& io = ImGui::GetIO();

    if (bd->ClipboardTextData)
        SDL_free(bd->ClipboardTextData);
    for (ImGui::ImGuiMouseCursor cursor_n = 0; cursor_n < ImGui::ImGuiMouseCursor_COUNT; cursor_n++)
        SDL_FreeCursor(bd->MouseCursors[cursor_n]);
    ImGui_ImplSDL2_CloseGamepads();

    io.BackendPlatformName = nullptr;
    io.BackendPlatformUserData = nullptr;
    IM_DELETE(bd);
}

bool ImGui_ImplSDL2_ProcessEvent(const SDL_Event* event)
{
    ImGui::ImGuiIO& io = ImGui::GetIO();
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();

    switch (event->type)
    {
        case SDL_MOUSEMOTION:
        {
            io.AddMousePosEvent((float)event->motion.x, (float)event->motion.y);
            return true;
        }
        case SDL_MOUSEWHEEL:
        {
            float wheel_x = (event->wheel.x > 0) ? 1.0f : (event->wheel.x < 0) ? -1.0f : 0.0f;
            float wheel_y = (event->wheel.y > 0) ? 1.0f : (event->wheel.y < 0) ? -1.0f : 0.0f;
            io.AddMouseWheelEvent(wheel_x, wheel_y);
            return true;
        }
        case SDL_MOUSEBUTTONDOWN:
        case SDL_MOUSEBUTTONUP:
        {
            int mouse_button = -1;
            if (event->button.button == SDL_BUTTON_LEFT) { mouse_button = 0; }
            if (event->button.button == SDL_BUTTON_RIGHT) { mouse_button = 1; }
            if (event->button.button == SDL_BUTTON_MIDDLE) { mouse_button = 2; }
            if (mouse_button == -1)
                break;
            io.AddMouseButtonEvent(mouse_button, (event->type == SDL_MOUSEBUTTONDOWN));
            bd->MouseButtonsDown = (event->type == SDL_MOUSEBUTTONDOWN) ? (bd->MouseButtonsDown | (1 << mouse_button)) : (bd->MouseButtonsDown & ~(1 << mouse_button));
            return true;
        }
        case SDL_TEXTINPUT:
        {
            io.AddInputCharactersUTF8(event->text.text);
            return true;
        }
        case SDL_KEYDOWN:
        case SDL_KEYUP:
        {
            ImGui::ImGuiKey key = ImGui_ImplSDL2_KeycodeToImGuiKey(event->key.keysym.sym);
            io.AddKeyEvent(key, (event->type == SDL_KEYDOWN));
            io.AddKeyEvent(ImGui::ImGuiKey_LeftCtrl, (event->key.keysym.mod & KMOD_CTRL) != 0);
            io.AddKeyEvent(ImGui::ImGuiKey_LeftShift, (event->key.keysym.mod & KMOD_SHIFT) != 0);
            io.AddKeyEvent(ImGui::ImGuiKey_LeftAlt, (event->key.keysym.mod & KMOD_ALT) != 0);
            io.AddKeyEvent(ImGui::ImGuiKey_LeftSuper, (event->key.keysym.mod & KMOD_GUI) != 0);
            return true;
        }
        case SDL_WINDOWEVENT:
        {
            if (event->window.event == SDL_WINDOWEVENT_FOCUS_GAINED)
                io.AddFocusEvent(true);
            else if (event->window.event == SDL_WINDOWEVENT_FOCUS_LOST)
                io.AddFocusEvent(false);
            return true;
        }
    }
    return false;
}

void ImGui_ImplSDL2_NewFrame()
{
    ImGui::ImGuiIO& io = ImGui::GetIO();
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplSDL2_Init()?");

    // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    int display_w, display_h;
    SDL_GetWindowSize(bd->Window, &w, &h);
    if (SDL_GetWindowFlags(bd->Window) & SDL_WINDOW_MINIMIZED)
        w = h = 0;
    if (bd->UseVulkan)
        SDL_Vulkan_GetDrawableSize(bd->Window, &display_w, &display_h);
    else
        SDL_GL_GetDrawableSize(bd->Window, &display_w, &display_h);
    io.DisplaySize = ImGui::ImVec2((float)w, (float)h);
    if (w > 0 && h > 0)
        io.DisplayFramebufferScale = ImGui::ImVec2((float)display_w / w, (float)display_h / h);

    // Setup time step (we don't use SDL_GetTicks() because it is using millisecond resolution)
    static Uint64 frequency = SDL_GetPerformanceFrequency();
    Uint64 current_time = SDL_GetPerformanceCounter();
    io.DeltaTime = bd->Time > 0 ? (float)((double)(current_time - bd->Time) / frequency) : (float)(1.0f / 60.0f);
    bd->Time = current_time;

    ImGui_ImplSDL2_UpdateMouseData();
    ImGui_ImplSDL2_UpdateMouseCursor();
}

static ImGui::ImGuiKey ImGui_ImplSDL2_KeycodeToImGuiKey(int keycode)
{
    switch (keycode)
    {
        case SDLK_TAB: return ImGui::ImGuiKey_Tab;
        case SDLK_LEFT: return ImGui::ImGuiKey_LeftArrow;
        case SDLK_RIGHT: return ImGui::ImGuiKey_RightArrow;
        case SDLK_UP: return ImGui::ImGuiKey_UpArrow;
        case SDLK_DOWN: return ImGui::ImGuiKey_DownArrow;
        case SDLK_PAGEUP: return ImGui::ImGuiKey_PageUp;
        case SDLK_PAGEDOWN: return ImGui::ImGuiKey_PageDown;
        case SDLK_HOME: return ImGui::ImGuiKey_Home;
        case SDLK_END: return ImGui::ImGuiKey_End;
        case SDLK_INSERT: return ImGui::ImGuiKey_Insert;
        case SDLK_DELETE: return ImGui::ImGuiKey_Delete;
        case SDLK_BACKSPACE: return ImGui::ImGuiKey_Backspace;
        case SDLK_SPACE: return ImGui::ImGuiKey_Space;
        case SDLK_RETURN: return ImGui::ImGuiKey_Enter;
        case SDLK_ESCAPE: return ImGui::ImGuiKey_Escape;
        case SDLK_QUOTE: return ImGui::ImGuiKey_Apostrophe;
        case SDLK_COMMA: return ImGui::ImGuiKey_Comma;
        case SDLK_MINUS: return ImGui::ImGuiKey_Minus;
        case SDLK_PERIOD: return ImGui::ImGuiKey_Period;
        case SDLK_SLASH: return ImGui::ImGuiKey_Slash;
        case SDLK_SEMICOLON: return ImGui::ImGuiKey_Semicolon;
        case SDLK_EQUALS: return ImGui::ImGuiKey_Equal;
        case SDLK_LEFTBRACKET: return ImGui::ImGuiKey_LeftBracket;
        case SDLK_BACKSLASH: return ImGui::ImGuiKey_Backslash;
        case SDLK_RIGHTBRACKET: return ImGui::ImGuiKey_RightBracket;
        case SDLK_BACKQUOTE: return ImGui::ImGuiKey_GraveAccent;
        case SDLK_CAPSLOCK: return ImGui::ImGuiKey_CapsLock;
        case SDLK_SCROLLLOCK: return ImGui::ImGuiKey_ScrollLock;
        case SDLK_NUMLOCKCLEAR: return ImGui::ImGuiKey_NumLock;
        case SDLK_PRINTSCREEN: return ImGui::ImGuiKey_PrintScreen;
        case SDLK_PAUSE: return ImGui::ImGuiKey_Pause;
        case SDLK_KP_0: return ImGui::ImGuiKey_Keypad0;
        case SDLK_KP_1: return ImGui::ImGuiKey_Keypad1;
        case SDLK_KP_2: return ImGui::ImGuiKey_Keypad2;
        case SDLK_KP_3: return ImGui::ImGuiKey_Keypad3;
        case SDLK_KP_4: return ImGui::ImGuiKey_Keypad4;
        case SDLK_KP_5: return ImGui::ImGuiKey_Keypad5;
        case SDLK_KP_6: return ImGui::ImGuiKey_Keypad6;
        case SDLK_KP_7: return ImGui::ImGuiKey_Keypad7;
        case SDLK_KP_8: return ImGui::ImGuiKey_Keypad8;
        case SDLK_KP_9: return ImGui::ImGuiKey_Keypad9;
        case SDLK_KP_PERIOD: return ImGui::ImGuiKey_KeypadDecimal;
        case SDLK_KP_DIVIDE: return ImGui::ImGuiKey_KeypadDivide;
        case SDLK_KP_MULTIPLY: return ImGui::ImGuiKey_KeypadMultiply;
        case SDLK_KP_MINUS: return ImGui::ImGuiKey_KeypadSubtract;
        case SDLK_KP_PLUS: return ImGui::ImGuiKey_KeypadAdd;
        case SDLK_KP_ENTER: return ImGui::ImGuiKey_KeypadEnter;
        case SDLK_KP_EQUALS: return ImGui::ImGuiKey_KeypadEqual;
        case SDLK_LCTRL: return ImGui::ImGuiKey_LeftCtrl;
        case SDLK_LSHIFT: return ImGui::ImGuiKey_LeftShift;
        case SDLK_LALT: return ImGui::ImGuiKey_LeftAlt;
        case SDLK_LGUI: return ImGui::ImGuiKey_LeftSuper;
        case SDLK_RCTRL: return ImGui::ImGuiKey_RightCtrl;
        case SDLK_RSHIFT: return ImGui::ImGuiKey_RightShift;
        case SDLK_RALT: return ImGui::ImGuiKey_RightAlt;
        case SDLK_RGUI: return ImGui::ImGuiKey_RightSuper;
        case SDLK_APPLICATION: return ImGui::ImGuiKey_Menu;
        case SDLK_0: return ImGui::ImGuiKey_0;
        case SDLK_1: return ImGui::ImGuiKey_1;
        case SDLK_2: return ImGui::ImGuiKey_2;
        case SDLK_3: return ImGui::ImGuiKey_3;
        case SDLK_4: return ImGui::ImGuiKey_4;
        case SDLK_5: return ImGui::ImGuiKey_5;
        case SDLK_6: return ImGui::ImGuiKey_6;
        case SDLK_7: return ImGui::ImGuiKey_7;
        case SDLK_8: return ImGui::ImGuiKey_8;
        case SDLK_9: return ImGui::ImGuiKey_9;
        case SDLK_a: return ImGui::ImGuiKey_A;
        case SDLK_b: return ImGui::ImGuiKey_B;
        case SDLK_c: return ImGui::ImGuiKey_C;
        case SDLK_d: return ImGui::ImGuiKey_D;
        case SDLK_e: return ImGui::ImGuiKey_E;
        case SDLK_f: return ImGui::ImGuiKey_F;
        case SDLK_g: return ImGui::ImGuiKey_G;
        case SDLK_h: return ImGui::ImGuiKey_H;
        case SDLK_i: return ImGui::ImGuiKey_I;
        case SDLK_j: return ImGui::ImGuiKey_J;
        case SDLK_k: return ImGui::ImGuiKey_K;
        case SDLK_l: return ImGui::ImGuiKey_L;
        case SDLK_m: return ImGui::ImGuiKey_M;
        case SDLK_n: return ImGui::ImGuiKey_N;
        case SDLK_o: return ImGui::ImGuiKey_O;
        case SDLK_p: return ImGui::ImGuiKey_P;
        case SDLK_q: return ImGui::ImGuiKey_Q;
        case SDLK_r: return ImGui::ImGuiKey_R;
        case SDLK_s: return ImGui::ImGuiKey_S;
        case SDLK_t: return ImGui::ImGuiKey_T;
        case SDLK_u: return ImGui::ImGuiKey_U;
        case SDLK_v: return ImGui::ImGuiKey_V;
        case SDLK_w: return ImGui::ImGuiKey_W;
        case SDLK_x: return ImGui::ImGuiKey_X;
        case SDLK_y: return ImGui::ImGuiKey_Y;
        case SDLK_z: return ImGui::ImGuiKey_Z;
        case SDLK_F1: return ImGui::ImGuiKey_F1;
        case SDLK_F2: return ImGui::ImGuiKey_F2;
        case SDLK_F3: return ImGui::ImGuiKey_F3;
        case SDLK_F4: return ImGui::ImGuiKey_F4;
        case SDLK_F5: return ImGui::ImGuiKey_F5;
        case SDLK_F6: return ImGui::ImGuiKey_F6;
        case SDLK_F7: return ImGui::ImGuiKey_F7;
        case SDLK_F8: return ImGui::ImGuiKey_F8;
        case SDLK_F9: return ImGui::ImGuiKey_F9;
        case SDLK_F10: return ImGui::ImGuiKey_F10;
        case SDLK_F11: return ImGui::ImGuiKey_F11;
        case SDLK_F12: return ImGui::ImGuiKey_F12;
        default: return ImGui::ImGuiKey_None;
    }
}

static void ImGui_ImplSDL2_UpdateGamepadButton(ImGui_ImplSDL2_Data* bd, ImGui::ImGuiIO& io, ImGui::ImGuiKey key, SDL_GameControllerButton button_no)
{
    bool merged_value = false;
    for (int i = 0; i < bd->GamepadsCount; i++)
        merged_value |= SDL_GameControllerGetButton(bd->GamepadsList[i], button_no) != 0;
    io.AddKeyEvent(key, merged_value);
}

static inline float Saturate(float v) { return v < 0.0f ? 0.0f : v > 1.0f ? 1.0f : v; }

static void ImGui_ImplSDL2_UpdateGamepadAnalog(ImGui_ImplSDL2_Data* bd, ImGui::ImGuiIO& io, ImGui::ImGuiKey key, SDL_GameControllerAxis axis_no, float v0, float v1)
{
    float merged_value = 0.0f;
    for (int i = 0; i < bd->GamepadsCount; i++)
    {
        float vn = Saturate((float)(SDL_GameControllerGetAxis(bd->GamepadsList[i], axis_no) - v0) / (float)(v1 - v0));
        if (merged_value < vn)
            merged_value = vn;
    }
    io.AddKeyAnalogEvent(key, merged_value > 0.1f, merged_value);
}

static void ImGui_ImplSDL2_UpdateGamepads()
{
    ImGui_ImplSDL2_Data* bd = ImGui_ImplSDL2_GetBackendData();
    ImGui::ImGuiIO& io = ImGui::GetIO();

    if ((io.ConfigFlags & ImGui::ImGuiConfigFlags_NavEnableGamepad) == 0)
        return;

    // Update gamepad inputs
    const int thumb_dead_zone = 8000;
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadStart, SDL_CONTROLLER_BUTTON_START);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadBack, SDL_CONTROLLER_BUTTON_BACK);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadFaceLeft, SDL_CONTROLLER_BUTTON_X);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadFaceRight, SDL_CONTROLLER_BUTTON_B);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadFaceUp, SDL_CONTROLLER_BUTTON_Y);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadFaceDown, SDL_CONTROLLER_BUTTON_A);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadDpadLeft, SDL_CONTROLLER_BUTTON_DPAD_LEFT);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadDpadRight, SDL_CONTROLLER_BUTTON_DPAD_RIGHT);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadDpadUp, SDL_CONTROLLER_BUTTON_DPAD_UP);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadDpadDown, SDL_CONTROLLER_BUTTON_DPAD_DOWN);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadL1, SDL_CONTROLLER_BUTTON_LEFTSHOULDER);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadR1, SDL_CONTROLLER_BUTTON_RIGHTSHOULDER);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadL2, SDL_CONTROLLER_AXIS_TRIGGERLEFT, 0.0f, 32767);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadR2, SDL_CONTROLLER_AXIS_TRIGGERRIGHT, 0.0f, 32767);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadL3, SDL_CONTROLLER_BUTTON_LEFTSTICK);
    ImGui_ImplSDL2_UpdateGamepadButton(bd, io, ImGui::ImGuiKey_GamepadR3, SDL_CONTROLLER_BUTTON_RIGHTSTICK);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadLStickLeft, SDL_CONTROLLER_AXIS_LEFTX, -thumb_dead_zone, -32768);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadLStickRight, SDL_CONTROLLER_AXIS_LEFTX, +thumb_dead_zone, +32767);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadLStickUp, SDL_CONTROLLER_AXIS_LEFTY, -thumb_dead_zone, -32768);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadLStickDown, SDL_CONTROLLER_AXIS_LEFTY, +thumb_dead_zone, +32767);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadRStickLeft, SDL_CONTROLLER_AXIS_RIGHTX, -thumb_dead_zone, -32768);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadRStickRight, SDL_CONTROLLER_AXIS_RIGHTX, +thumb_dead_zone, +32767);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadRStickUp, SDL_CONTROLLER_AXIS_RIGHTY, -thumb_dead_zone, -32768);
    ImGui_ImplSDL2_UpdateGamepadAnalog(bd, io, ImGui::ImGuiKey_GamepadRStickDown, SDL_CONTROLLER_AXIS_RIGHTY, +thumb_dead_zone, +32767);
}

//-----------------------------------------------------------------------------

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif // #ifndef IMGUI_DISABLE
