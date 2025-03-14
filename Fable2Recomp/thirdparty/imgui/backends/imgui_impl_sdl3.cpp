#include "imgui.h"
#include "imgui_impl_sdl3.h"
#include <SDL3/SDL.h>
#include <SDL3/SDL_syswm.h>

// SDL Data
struct ImGui_ImplSDL3_Data
{
    SDL_Window* Window;
    SDL_Renderer* Renderer;
    bool MouseCanUseGlobalState;
    bool MouseCanReportHoveredViewport;
    bool WantUpdateMonitors;
    int PendingMouseLeaveFrame;
    Uint32 MouseWindowID;
    int MouseButtonsDown;
    SDL_Cursor* MouseCursors[ImGui::ImGuiMouseCursor_COUNT];
    SDL_Window* MouseFocus;
    SDL_Window* MouseHoveredWindow;
    bool WantUpdateMousePos;
    bool WantUpdateMouseCursor;
};

// Backend data stored in io.BackendPlatformUserData to allow support for multiple Dear ImGui contexts
static ImGui_ImplSDL3_Data* ImGui_ImplSDL3_GetBackendData()
{
    return ImGui::GetCurrentContext() ? (ImGui_ImplSDL3_Data*)ImGui::GetIO().BackendPlatformUserData : nullptr;
}

// Forward Declarations
static void ImGui_ImplSDL3_UpdateMonitors();
static void ImGui_ImplSDL3_InitPlatformInterface(SDL_Window* window);
static void ImGui_ImplSDL3_ShutdownPlatformInterface();

// Functions
bool ImGui_ImplSDL3_Init(SDL_Window* window, SDL_Renderer* renderer)
{
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.BackendPlatformUserData == nullptr && "Already initialized a platform backend!");

    // Check and store if we are on a SDL backend that supports global mouse position
    bool mouse_can_use_global_state = false;
#if SDL_VERSION_ATLEAST(3, 0, 0)
    mouse_can_use_global_state = true;
#endif

    // Setup backend capabilities flags
    io.BackendFlags |= ImGui::ImGuiBackendFlags_HasMouseCursors;
    io.BackendFlags |= ImGui::ImGuiBackendFlags_HasSetMousePos;
    io.BackendPlatformName = "imgui_impl_sdl3";

    // Setup backend data
    ImGui_ImplSDL3_Data* bd = IM_NEW(ImGui_ImplSDL3_Data)();
    io.BackendPlatformUserData = (void*)bd;

    // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    SDL_GetWindowSize(window, &w, &h);
    io.DisplaySize = ImVec2((float)w, (float)h);

    // Setup time step
    Uint64 time = SDL_GetTicks();
    static Uint64 last_time = time;
    io.DeltaTime = (time > last_time) ? ((float)(int)(time - last_time) / 1000.0f) : (1.0f / 60.0f);
    last_time = time;

    // Setup mouse cursors
    bd->MouseCursors[ImGui::ImGuiMouseCursor_Arrow] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_DEFAULT);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_TextInput] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_TEXT);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeAll] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEALL);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeNS] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENS);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeEW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZEWE);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeNESW] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENESW);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_ResizeNWSE] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_SIZENWSE);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_Hand] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
    bd->MouseCursors[ImGui::ImGuiMouseCursor_NotAllowed] = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_NOTALLOWED);

    // Store window handle for mouse events
    bd->Window = window;
    bd->Renderer = renderer;
    bd->MouseCanUseGlobalState = mouse_can_use_global_state;
    bd->MouseCanReportHoveredViewport = true;
    bd->WantUpdateMonitors = true;

    // Set platform dependent data in viewport
    ImGui::ImGuiViewport* main_viewport = ImGui::GetMainViewport();
    main_viewport->PlatformHandle = (void*)window;

    // Setup platform interface
    ImGui_ImplSDL3_InitPlatformInterface(window);

    return true;
}

void ImGui_ImplSDL3_Shutdown()
{
    ImGui_ImplSDL3_Data* bd = ImGui_ImplSDL3_GetBackendData();
    IM_ASSERT(bd != nullptr && "No platform backend to shutdown, or already shutdown?");
    ImGuiIO& io = ImGui::GetIO();
    io.BackendPlatformUserData = nullptr;

    // Destroy platform interface
    ImGui_ImplSDL3_ShutdownPlatformInterface();

    // Destroy mouse cursors
    for (int i = 0; i < ImGui::ImGuiMouseCursor_COUNT; i++)
        SDL_DestroyCursor(bd->MouseCursors[i]);

    IM_DELETE(bd);
}

bool ImGui_ImplSDL3_ProcessEvent(const SDL_Event* event)
{
    ImGuiIO& io = ImGui::GetIO();
    ImGui_ImplSDL3_Data* bd = ImGui_ImplSDL3_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplSDL3_Init()?");

    switch (event->type)
    {
    case SDL_EVENT_MOUSE_MOTION:
    {
        io.AddMousePosEvent((float)event->motion.x, (float)event->motion.y);
        return true;
    }
    case SDL_EVENT_MOUSE_BUTTON_DOWN:
    case SDL_EVENT_MOUSE_BUTTON_UP:
    {
        int mouse_button = -1;
        if (event->button.button == SDL_BUTTON_LEFT) { mouse_button = 0; }
        if (event->button.button == SDL_BUTTON_RIGHT) { mouse_button = 1; }
        if (event->button.button == SDL_BUTTON_MIDDLE) { mouse_button = 2; }
        if (mouse_button == -1)
            break;
        io.AddMouseButtonEvent(mouse_button, (event->type == SDL_EVENT_MOUSE_BUTTON_DOWN));
        bd->MouseButtonsDown = (event->type == SDL_EVENT_MOUSE_BUTTON_DOWN) ? (bd->MouseButtonsDown | (1 << mouse_button)) : (bd->MouseButtonsDown & ~(1 << mouse_button));
        return true;
    }
    case SDL_EVENT_MOUSE_WHEEL:
    {
        float wheel_x = (event->wheel.x > 0) ? 1.0f : (event->wheel.x < 0) ? -1.0f : 0.0f;
        float wheel_y = (event->wheel.y > 0) ? 1.0f : (event->wheel.y < 0) ? -1.0f : 0.0f;
        io.AddMouseWheelEvent(wheel_x, wheel_y);
        return true;
    }
    case SDL_EVENT_KEY_DOWN:
    case SDL_EVENT_KEY_UP:
    {
        ImGui::ImGuiKey key = ImGui_ImplSDL3_KeycodeToImGuiKey(event->key.keysym.sym);
        io.AddKeyEvent(key, (event->type == SDL_EVENT_KEY_DOWN));
        io.SetKeyEventNativeData(key, event->key.keysym.sym, event->key.keysym.scancode, event->key.keysym.scancode);
        return true;
    }
    case SDL_EVENT_TEXT_INPUT:
    {
        io.AddInputCharactersUTF8(event->text.text);
        return true;
    }
    case SDL_EVENT_WINDOW_FOCUS_GAINED:
    case SDL_EVENT_WINDOW_FOCUS_LOST:
    {
        io.AddFocusEvent((event->type == SDL_EVENT_WINDOW_FOCUS_GAINED));
        return true;
    }
    }
    return false;
}

ImGui::ImGuiKey ImGui_ImplSDL3_KeycodeToImGuiKey(int keycode)
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
    case SDLK_KP_ENTER: return ImGui::ImGuiKey_KeyPadEnter;
    case SDLK_a: return ImGui::ImGuiKey_A;
    case SDLK_c: return ImGui::ImGuiKey_C;
    case SDLK_v: return ImGui::ImGuiKey_V;
    case SDLK_x: return ImGui::ImGuiKey_X;
    case SDLK_y: return ImGui::ImGuiKey_Y;
    case SDLK_z: return ImGui::ImGuiKey_Z;
    default: return ImGui::ImGuiKey_None;
    }
}

void ImGui_ImplSDL3_UpdateMousePosAndButtons()
{
    ImGui_ImplSDL3_Data* bd = ImGui_ImplSDL3_GetBackendData();
    ImGuiIO& io = ImGui::GetIO();

    // Set OS mouse position if requested (rarely used, only when ImGuiConfigFlags_NavEnableSetMousePos is enabled by user)
    if (io.WantSetMousePos)
        SDL_WarpMouseInWindow(bd->Window, (int)io.MousePos.x, (int)io.MousePos.y);

    // Update mouse buttons
    int mouse_x_local, mouse_y_local;
    Uint32 mouse_buttons = SDL_GetMouseState(&mouse_x_local, &mouse_y_local);
    io.MousePos = ImVec2((float)mouse_x_local, (float)mouse_y_local);
    io.MouseDown[0] = bd->MouseButtonsDown & SDL_BUTTON(SDL_BUTTON_LEFT);
    io.MouseDown[1] = bd->MouseButtonsDown & SDL_BUTTON(SDL_BUTTON_RIGHT);
    io.MouseDown[2] = bd->MouseButtonsDown & SDL_BUTTON(SDL_BUTTON_MIDDLE);
}

void ImGui_ImplSDL3_UpdateMouseCursor()
{
    ImGuiIO& io = ImGui::GetIO();
    if (io.ConfigFlags & ImGui::ImGuiConfigFlags_NoMouseCursorChange)
        return;

    ImGui_ImplSDL3_Data* bd = ImGui_ImplSDL3_GetBackendData();
    ImGui::ImGuiMouseCursor imgui_cursor = ImGui::GetMouseCursor();
    if (io.MouseDrawCursor || imgui_cursor == ImGui::ImGuiMouseCursor_None)
    {
        SDL_HideCursor();
    }
    else
    {
        SDL_SetCursor(bd->MouseCursors[imgui_cursor] ? bd->MouseCursors[imgui_cursor] : bd->MouseCursors[ImGui::ImGuiMouseCursor_Arrow]);
        SDL_ShowCursor();
    }
}

void ImGui_ImplSDL3_NewFrame()
{
    ImGui_ImplSDL3_Data* bd = ImGui_ImplSDL3_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplSDL3_Init()?");

    ImGuiIO& io = ImGui::GetIO();

    // Setup display size (every frame to accommodate for window resizing)
    int w, h;
    SDL_GetWindowSize(bd->Window, &w, &h);
    io.DisplaySize = ImVec2((float)w, (float)h);

    // Setup time step
    Uint64 time = SDL_GetTicks();
    static Uint64 last_time = time;
    io.DeltaTime = (time > last_time) ? ((float)(int)(time - last_time) / 1000.0f) : (1.0f / 60.0f);
    last_time = time;

    // Update monitors
    if (bd->WantUpdateMonitors)
        ImGui_ImplSDL3_UpdateMonitors();

    // Update mouse position and buttons
    ImGui_ImplSDL3_UpdateMousePosAndButtons();

    // Update mouse cursor if requested
    if (bd->WantUpdateMouseCursor)
    {
        ImGui_ImplSDL3_UpdateMouseCursor();
    }
    bd->WantUpdateMouseCursor = false;
}

// Platform interface
static void ImGui_ImplSDL3_UpdateMonitors()
{
    ImGui_ImplSDL3_Data* bd = ImGui_ImplSDL3_GetBackendData();
    bd->WantUpdateMonitors = false;

    ImGuiPlatformIO& platform_io = ImGui::GetPlatformIO();
    platform_io.Monitors.resize(0);

    int display_count;
    SDL_DisplayID* displays = SDL_GetDisplays(&display_count);
    if (displays)
    {
        for (int n = 0; n < display_count; n++)
        {
            ImGuiPlatformMonitor monitor;
            monitor.MainPos = ImVec2(0, 0);
            monitor.MainSize = ImVec2(0, 0);
            monitor.WorkPos = ImVec2(0, 0);
            monitor.WorkSize = ImVec2(0, 0);
            monitor.DpiScale = 1.0f;

            SDL_DisplayMode mode;
            if (SDL_GetCurrentDisplayMode(displays[n], &mode) == 0)
            {
                monitor.MainSize = ImVec2((float)mode.w, (float)mode.h);
            }

            SDL_Rect r;
            if (SDL_GetDisplayUsableBounds(displays[n], &r) == 0)
            {
                monitor.WorkPos = ImVec2((float)r.x, (float)r.y);
                monitor.WorkSize = ImVec2((float)r.w, (float)r.h);
            }

            platform_io.Monitors.push_back(monitor);
        }
        SDL_free(displays);
    }
}

static void ImGui_ImplSDL3_InitPlatformInterface(SDL_Window* window)
{
    // Register platform interface (will be coupled with a renderer interface)
    ImGuiPlatformIO& platform_io = ImGui::GetPlatformIO();
    platform_io.Platform_CreateWindow = ImGui_ImplSDL3_CreateWindow;
    platform_io.Platform_DestroyWindow = ImGui_ImplSDL3_DestroyWindow;
    platform_io.Platform_ShowWindow = ImGui_ImplSDL3_ShowWindow;
    platform_io.Platform_SetWindowPos = ImGui_ImplSDL3_SetWindowPos;
    platform_io.Platform_GetWindowPos = ImGui_ImplSDL3_GetWindowPos;
    platform_io.Platform_SetWindowSize = ImGui_ImplSDL3_SetWindowSize;
    platform_io.Platform_GetWindowSize = ImGui_ImplSDL3_GetWindowSize;
    platform_io.Platform_SetWindowFocus = ImGui_ImplSDL3_SetWindowFocus;
    platform_io.Platform_GetWindowFocus = ImGui_ImplSDL3_GetWindowFocus;
    platform_io.Platform_GetWindowMinimized = ImGui_ImplSDL3_GetWindowMinimized;
    platform_io.Platform_SetWindowTitle = ImGui_ImplSDL3_SetWindowTitle;
    platform_io.Platform_RenderWindow = ImGui_ImplSDL3_RenderWindow;
    platform_io.Platform_SwapBuffers = ImGui_ImplSDL3_SwapBuffers;
    platform_io.Platform_SetWindowAlpha = ImGui_ImplSDL3_SetWindowAlpha;
    platform_io.Platform_GetWindowDpiScale = ImGui_ImplSDL3_GetWindowDpiScale;
}

static void ImGui_ImplSDL3_ShutdownPlatformInterface()
{
    ImGui::DestroyPlatformWindows();
} 