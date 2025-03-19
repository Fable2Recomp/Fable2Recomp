#pragma once

#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cfloat>
#include <cstring>

// Define IMGUI_IMPL_API
#ifndef IMGUI_IMPL_API
#define IMGUI_IMPL_API
#endif

// Internal macros
#define IM_ASSERT(_EXPR)            ((void)(_EXPR))
#define IM_ARRAYSIZE(_ARR)          ((int)(sizeof(_ARR) / sizeof(*(_ARR))))
#define IM_NEW(_TYPE)               new _TYPE
#define IM_DELETE(_PTR)             delete _PTR

namespace ImGui {

// Forward declarations
struct ImDrawList;
struct ImDrawListSharedData;
struct ImGuiStyle;
struct ImGuiIO;
struct ImGuiViewport;
struct ImGuiStorage;
struct ImGuiPayload;
struct ImGuiWindowClass;
struct ImGuiInputTextCallbackData;
struct ImGuiPlatformIO;

// Basic types
typedef unsigned int ImU32;
typedef uint64_t ImU64;
typedef unsigned int ImGuiID;
typedef void* ImTextureID;
typedef unsigned short ImWchar16;

// Flags & Enums
typedef int ImGuiWindowFlags;
typedef int ImGuiButtonFlags;
typedef int ImGuiDir;
typedef int ImGuiPopupFlags;
typedef int ImGuiTabBarFlags;
typedef int ImGuiTabItemFlags;
typedef int ImGuiDockNodeFlags;
typedef int ImGuiDragDropFlags;
typedef int ImGuiDataType;
typedef int ImGuiCol;
typedef int ImGuiCond;
typedef int ImGuiMouseButton;
typedef int ImGuiHoveredFlags;
typedef int ImGuiInputTextFlags;
typedef int ImGuiColorEditFlags;
typedef int ImGuiSliderFlags;
typedef int ImGuiSelectableFlags;
typedef int ImGuiTreeNodeFlags;
typedef int ImGuiComboFlags;
typedef int ImGuiKey;
typedef int ImGuiMouseCursor;
typedef int ImGuiBackendFlags;
typedef int ImGuiConfigFlags;
typedef int ImGuiViewportFlags;

// Callback types
typedef int (*ImGuiInputTextCallback)(ImGuiInputTextCallbackData* data);

// Basic ImGui types
struct ImVec2 { float x, y; ImVec2() { x = y = 0.0f; } ImVec2(float _x, float _y) { x = _x; y = _y; } };
struct ImVec4 { float x, y, z, w; ImVec4() { x = y = z = w = 0.0f; } ImVec4(float _x, float _y, float _z, float _w) { x = _x; y = _y; z = _z; w = _w; } };

// Draw data
struct ImDrawData {
    bool Valid;
    int CmdListsCount;
    int TotalIdxCount;
    int TotalVtxCount;
    ImVec2 DisplayPos;
    ImVec2 DisplaySize;
    ImVec2 FramebufferScale;
};

// Font data
struct ImFontAtlas {
    void GetTexDataAsRGBA32(unsigned char** out_pixels, int* out_width, int* out_height);
};

// Enums
enum ImGuiMouseSource {
    ImGuiMouseSource_Mouse = 0,
    ImGuiMouseSource_TouchScreen,
    ImGuiMouseSource_COUNT
};

enum ImGuiMouseCursor_ {
    ImGuiMouseCursor_None = -1,
    ImGuiMouseCursor_Arrow = 0,
    ImGuiMouseCursor_TextInput,
    ImGuiMouseCursor_ResizeAll,
    ImGuiMouseCursor_ResizeNS,
    ImGuiMouseCursor_ResizeEW,
    ImGuiMouseCursor_ResizeNESW,
    ImGuiMouseCursor_ResizeNWSE,
    ImGuiMouseCursor_Hand,
    ImGuiMouseCursor_Wait,
    ImGuiMouseCursor_Progress,
    ImGuiMouseCursor_NotAllowed,
    ImGuiMouseCursor_COUNT
};

enum ImGuiBackendFlags_ {
    ImGuiBackendFlags_None                  = 0,
    ImGuiBackendFlags_HasGamepad            = 1 << 0,
    ImGuiBackendFlags_HasMouseCursors       = 1 << 1,
    ImGuiBackendFlags_HasSetMousePos        = 1 << 2,
    ImGuiBackendFlags_RendererHasVtxOffset  = 1 << 3
};

enum ImGuiConfigFlags_ {
    ImGuiConfigFlags_None                   = 0,
    ImGuiConfigFlags_NavEnableKeyboard      = 1 << 0,
    ImGuiConfigFlags_NavEnableGamepad       = 1 << 1,
    ImGuiConfigFlags_NavEnableSetMousePos   = 1 << 2,
    ImGuiConfigFlags_NavNoCaptureKeyboard   = 1 << 3,
    ImGuiConfigFlags_NoMouse                = 1 << 4,
    ImGuiConfigFlags_NoMouseCursorChange    = 1 << 5,
    ImGuiConfigFlags_DockingEnable         = 1 << 6,
    ImGuiConfigFlags_IsSRGB                 = 1 << 20,
    ImGuiConfigFlags_IsTouchScreen          = 1 << 21
};

enum ImGuiKey_ {
    ImGuiKey_None = 0,
    ImGuiKey_Tab = 512,
    ImGuiKey_LeftArrow,
    ImGuiKey_RightArrow,
    ImGuiKey_UpArrow,
    ImGuiKey_DownArrow,
    ImGuiKey_PageUp,
    ImGuiKey_PageDown,
    ImGuiKey_Home,
    ImGuiKey_End,
    ImGuiKey_Insert,
    ImGuiKey_Delete,
    ImGuiKey_Backspace,
    ImGuiKey_Space,
    ImGuiKey_Enter,
    ImGuiKey_Escape,
    ImGuiKey_LeftCtrl, ImGuiKey_LeftShift, ImGuiKey_LeftAlt, ImGuiKey_LeftSuper,
    ImGuiKey_RightCtrl, ImGuiKey_RightShift, ImGuiKey_RightAlt, ImGuiKey_RightSuper,
    ImGuiKey_Menu,
    ImGuiKey_0, ImGuiKey_1, ImGuiKey_2, ImGuiKey_3, ImGuiKey_4, ImGuiKey_5, ImGuiKey_6, ImGuiKey_7, ImGuiKey_8, ImGuiKey_9,
    ImGuiKey_A, ImGuiKey_B, ImGuiKey_C, ImGuiKey_D, ImGuiKey_E, ImGuiKey_F, ImGuiKey_G, ImGuiKey_H, ImGuiKey_I, ImGuiKey_J,
    ImGuiKey_K, ImGuiKey_L, ImGuiKey_M, ImGuiKey_N, ImGuiKey_O, ImGuiKey_P, ImGuiKey_Q, ImGuiKey_R, ImGuiKey_S, ImGuiKey_T,
    ImGuiKey_U, ImGuiKey_V, ImGuiKey_W, ImGuiKey_X, ImGuiKey_Y, ImGuiKey_Z,
    ImGuiKey_F1, ImGuiKey_F2, ImGuiKey_F3, ImGuiKey_F4, ImGuiKey_F5, ImGuiKey_F6,
    ImGuiKey_F7, ImGuiKey_F8, ImGuiKey_F9, ImGuiKey_F10, ImGuiKey_F11, ImGuiKey_F12,
    ImGuiKey_Apostrophe,        // '
    ImGuiKey_Comma,            // ,
    ImGuiKey_Minus,            // -
    ImGuiKey_Period,           // .
    ImGuiKey_Slash,            // /
    ImGuiKey_Semicolon,        // ;
    ImGuiKey_Equal,            // =
    ImGuiKey_LeftBracket,      // [
    ImGuiKey_Backslash,        // \ (this text will compile)
    ImGuiKey_RightBracket,     // ]
    ImGuiKey_GraveAccent,      // `
    ImGuiKey_CapsLock,
    ImGuiKey_ScrollLock,
    ImGuiKey_NumLock,
    ImGuiKey_PrintScreen,
    ImGuiKey_Pause,
    ImGuiKey_Keypad0, ImGuiKey_Keypad1, ImGuiKey_Keypad2, ImGuiKey_Keypad3, ImGuiKey_Keypad4,
    ImGuiKey_Keypad5, ImGuiKey_Keypad6, ImGuiKey_Keypad7, ImGuiKey_Keypad8, ImGuiKey_Keypad9,
    ImGuiKey_KeypadDecimal,
    ImGuiKey_KeypadDivide,
    ImGuiKey_KeypadMultiply,
    ImGuiKey_KeypadSubtract,
    ImGuiKey_KeypadAdd,
    ImGuiKey_KeypadEnter,
    ImGuiKey_KeypadEqual,

    // Gamepad (some of these are analog values, 0.0f to 1.0f)
    ImGuiKey_GamepadStart,          // Menu (Xbox)      + (Switch)   Start/Options (PS)
    ImGuiKey_GamepadBack,           // View (Xbox)      - (Switch)   Share (PS)
    ImGuiKey_GamepadFaceLeft,       // X (Xbox)         Y (Switch)   Square (PS)
    ImGuiKey_GamepadFaceRight,      // B (Xbox)         A (Switch)   Circle (PS)
    ImGuiKey_GamepadFaceUp,         // Y (Xbox)         X (Switch)   Triangle (PS)
    ImGuiKey_GamepadFaceDown,       // A (Xbox)         B (Switch)   Cross (PS)
    ImGuiKey_GamepadDpadLeft,       // D-pad Left
    ImGuiKey_GamepadDpadRight,      // D-pad Right
    ImGuiKey_GamepadDpadUp,         // D-pad Up
    ImGuiKey_GamepadDpadDown,       // D-pad Down
    ImGuiKey_GamepadL1,             // L Bumper (Xbox)  L (Switch)   L1 (PS)
    ImGuiKey_GamepadR1,             // R Bumper (Xbox)  R (Switch)   R1 (PS)
    ImGuiKey_GamepadL2,             // L Trig. (Xbox)   ZL (Switch)  L2 (PS) [Analog]
    ImGuiKey_GamepadR2,             // R Trig. (Xbox)   ZR (Switch)  R2 (PS) [Analog]
    ImGuiKey_GamepadL3,             // L Stick (Xbox)   L3 (Switch)  L3 (PS)
    ImGuiKey_GamepadR3,             // R Stick (Xbox)   R3 (Switch)  R3 (PS)
    ImGuiKey_GamepadLStickLeft,     // [Analog]
    ImGuiKey_GamepadLStickRight,    // [Analog]
    ImGuiKey_GamepadLStickUp,       // [Analog]
    ImGuiKey_GamepadLStickDown,     // [Analog]
    ImGuiKey_GamepadRStickLeft,     // [Analog]
    ImGuiKey_GamepadRStickRight,    // [Analog]
    ImGuiKey_GamepadRStickUp,       // [Analog]
    ImGuiKey_GamepadRStickDown,     // [Analog]
    ImGuiKey_COUNT,                 // No valid ImGuiKey is ever greater than this value
    
    // Keyboard Modifiers (explicitly submitted by backend via AddKeyEvent() calls)
    ImGuiMod_None                   = 0,
    ImGuiMod_Ctrl                   = 1 << 12,
    ImGuiMod_Shift                  = 1 << 13,
    ImGuiMod_Alt                    = 1 << 14,
    ImGuiMod_Super                  = 1 << 15,
    ImGuiMod_Shortcut              = 1 << 11,
    ImGuiMod_Mask_                  = 0xF800
};

// Viewport flags
enum ImGuiViewportFlags_ {
    ImGuiViewportFlags_None                     = 0,
    ImGuiViewportFlags_IsPlatformWindow        = 1 << 0,   // Platform Window: Was created/managed by the platform backend
    ImGuiViewportFlags_IsPlatformMonitor       = 1 << 1,   // Platform Monitor: Represents a platform monitor (unused yet)
    ImGuiViewportFlags_OwnedByApp              = 1 << 2,   // Platform Window: Created by your application or by the platform backend
    ImGuiViewportFlags_NoDecoration            = 1 << 3,   // Platform Window: Window showing no title bar, borders, etc.
    ImGuiViewportFlags_NoTaskBarIcon           = 1 << 4,   // Platform Window: Disable platform task bar icon (FIXME: Unimplemented)
    ImGuiViewportFlags_NoFocusOnAppearing      = 1 << 5,   // Platform Window: Don't take focus when created
    ImGuiViewportFlags_NoFocusOnClick          = 1 << 6,   // Platform Window: Don't take focus when clicked on
    ImGuiViewportFlags_NoInputs                = 1 << 7,   // Platform Window: Make mouse pass through so we can drag this window while peaking behind it
    ImGuiViewportFlags_NoRendererClear         = 1 << 8,   // Platform Window: Renderer doesn't need to clear the framebuffer ahead (because we will fill it entirely)
    ImGuiViewportFlags_TopMost                 = 1 << 9,   // Platform Window: Display on top (for tooltips only)
    ImGuiViewportFlags_Minimized               = 1 << 10,  // Platform Window: Window is minimized, can skip render
    ImGuiViewportFlags_NoAutoMerge             = 1 << 11,  // Platform Window: Avoid merging this window into another host window. This can only be set via ImGuiWindowClass viewport flags override (because we need to now ahead if we are going to create a viewport in the first place!)
    ImGuiViewportFlags_CanHostOtherWindows     = 1 << 12   // Main viewport: can host multiple imgui windows (secondary viewports are associated to a single window)
};

// Context and Viewport
struct ImGuiContext;
struct ImGuiViewport {
    ImGuiID ID;                    // Unique identifier for the viewport
    ImGuiViewportFlags Flags;      // See ImGuiViewportFlags_
    ImVec2 Pos;                    // Main Area: Position of the viewport (relative to the main viewport)
    ImVec2 Size;                   // Main Area: Size of the viewport
    ImVec2 WorkPos;                // Work Area: Position of the viewport minus task bars, menus bars, status bars (relative to the main viewport)
    ImVec2 WorkSize;               // Work Area: Size of the viewport minus task bars, menu bars, status bars
    float DpiScale;                // 1.0f = 96 DPI = No extra scale
    ImGuiID ParentViewportId;      // (Advanced) 0: no parent. Instruct the platform backend to setup a parent/child relationship between platform windows.
    ImDrawData* DrawData;          // The ImDrawData corresponding to this viewport. Valid after Render() and until the next call to NewFrame().
    
    // Platform/Backend Dependent Data
    void* PlatformHandle;          // void* for Win32, SDL_Window* for SDL2
    void* PlatformHandleRaw;       // Always set back to NULL
    bool PlatformRequestMove;      // Platform window requested move (e.g. window was moved by the OS / host window manager, authoritative position will be OS window position)
    bool PlatformRequestResize;    // Platform window requested resize (e.g. window was resized by the OS / host window manager, authoritative size will be OS window size)
    bool PlatformRequestClose;     // Platform window requested closure (e.g. window was moved by the OS / host window manager, e.g. pressing ALT-F4)
};

// Platform IO
struct ImGuiPlatformIO {
    // Platform function callbacks
    void (*Platform_CreateWindow)(ImGuiViewport* vp);                     // Create a new platform window for the given viewport
    void (*Platform_DestroyWindow)(ImGuiViewport* vp);                   // Destroy a platform window
    void (*Platform_ShowWindow)(ImGuiViewport* vp);                      // Show a platform window
    void (*Platform_SetWindowPos)(ImGuiViewport* vp, ImVec2 pos);        // Set platform window position
    ImVec2 (*Platform_GetWindowPos)(ImGuiViewport* vp);                  // Get platform window position
    void (*Platform_SetWindowSize)(ImGuiViewport* vp, ImVec2 size);      // Set platform window size
    ImVec2 (*Platform_GetWindowSize)(ImGuiViewport* vp);                 // Get platform window size
    void (*Platform_SetWindowFocus)(ImGuiViewport* vp);                  // Set platform window focus
    bool (*Platform_GetWindowFocus)(ImGuiViewport* vp);                  // Get platform window focus
    bool (*Platform_GetWindowMinimized)(ImGuiViewport* vp);              // Get platform window minimized state
    void (*Platform_SetWindowTitle)(ImGuiViewport* vp, const char* str); // Set platform window title
    void (*Platform_SetWindowAlpha)(ImGuiViewport* vp, float alpha);     // Set platform window alpha
    void (*Platform_UpdateWindow)(ImGuiViewport* vp);                    // Called by UpdatePlatformWindows(). Optional hook to allow the platform backend from doing general book-keeping every frame.
    void (*Platform_RenderWindow)(ImGuiViewport* vp, void* render_arg);  // (Optional) Main rendering (platform side! This is often unused, or just setting a "current" context for OpenGL bindings).
    void (*Platform_SwapBuffers)(ImGuiViewport* vp, void* render_arg);   // (Optional) Call Present/SwapBuffers (platform side! This is often unused!).
    float (*Platform_GetWindowDpiScale)(ImGuiViewport* vp);              // (Optional) [BETA] FIXME-DPI: DPI handling: Return DPI scale for this viewport. 1.0f = 96 DPI.
    void (*Platform_OnChangedViewport)(ImGuiViewport* vp);               // (Optional) [BETA] FIXME-DPI: DPI handling: Called during Begin() every time the viewport we are outputting into changes, so backend has a chance to swap fonts to adjust style.
    int (*Platform_CreateVkSurface)(ImGuiViewport* vp, ImU64 vk_inst, const void* vk_allocators, ImU64* out_vk_surface); // (Optional) For a Vulkan Renderer to call into Platform code (since the surface creation needs to tie them both).

    // (Optional) Platform functions
    void (*Platform_SetImeInputPos)(ImGuiViewport* vp, ImVec2 pos);      // Set IME (Input Method Editor, e.g. for Asian languages) input position, so text preview appears over the widget
    void (*Platform_SetClipboardText)(void* user_data, const char* text);
    const char* (*Platform_GetClipboardText)(void* user_data);
    void* Platform_ClipboardUserData;
    bool (*Platform_OpenInShellFn)(ImGuiContext*, const char* url);      // Open URL in default browser
};

// IO struct
struct ImGuiIO {
    // Configuration
    ImGuiConfigFlags ConfigFlags;                // See ImGuiConfigFlags_
    ImGuiBackendFlags BackendFlags;              // See ImGuiBackendFlags_
    ImVec2 DisplaySize;             // Display size, in pixels
    float DeltaTime;                // Time elapsed since last frame, in seconds
    float IniSavingRate;            // Minimum time between saving positions/sizes to .ini file, in seconds
    const char* IniFilename;        // Path to .ini file
    const char* LogFilename;        // Path to .log file
    float MouseDoubleClickTime;     // Time for a double-click, in seconds
    float MouseDoubleClickMaxDist;  // Distance threshold to stay in to validate a double-click, in pixels
    float MouseDragThreshold;       // Distance threshold before considering we are dragging
    int KeyMap[512];                // Map of indices into the KeysDown[512] entries array
    float KeyRepeatDelay;           // When holding a key/button, time before it starts repeating, in seconds
    float KeyRepeatRate;            // When holding a key/button, rate at which it repeats, in seconds
    void* UserData;                 // Store your own data for retrieval by callbacks
    
    // Input state
    ImVec2 MousePos;               // Mouse position, in pixels
    bool MouseDown[5];             // Mouse buttons: 0=left, 1=right, 2=middle + extras
    float MouseWheel;              // Mouse wheel Vertical: 1 unit scrolls about 5 lines text
    float MouseWheelH;             // Mouse wheel Horizontal
    bool MouseDrawCursor;          // Request ImGui to draw a mouse cursor for you
    bool KeyCtrl;                  // Keyboard modifier pressed: Control
    bool KeyShift;                 // Keyboard modifier pressed: Shift
    bool KeyAlt;                   // Keyboard modifier pressed: Alt
    bool KeySuper;                 // Keyboard modifier pressed: Cmd/Super/Windows
    bool KeysDown[512];            // Keyboard keys that are pressed (ideally left in the "native" order your engine has access to keyboard keys, so you can use your own defines/enums for keys)
    
    // Helper functions
    void AddKeyEvent(ImGuiKey key, bool down);
    void AddKeyAnalogEvent(ImGuiKey key, bool down, float v);
    void AddMousePosEvent(float x, float y);
    void AddMouseButtonEvent(int button, bool down);
    void AddMouseWheelEvent(float wh_x, float wh_y);
    void AddFocusEvent(bool focused);
    void AddInputCharacter(unsigned int c);
    void AddInputCharacterUTF16(ImWchar16 c);
    void AddInputCharactersUTF8(const char* str);
    void ClearInputCharacters();
    void ClearInputKeys();
    
    // Output state
    ImVec2 DisplayFramebufferScale;  // = (1, 1) on normal displays, = (2, 2) on OSX with Retina display
    bool WantCaptureMouse;           // When io.WantCaptureMouse is true, imgui will use the mouse inputs and do not dispatch them to your main game/application
    bool WantCaptureKeyboard;        // When io.WantCaptureKeyboard is true, imgui will use the keyboard inputs and do not dispatch them to your main game/application
    bool WantTextInput;              // Mobile/console: when io.WantTextInput is true, you may display an on-screen keyboard
    bool WantSetMousePos;            // [BETA-NAV] MousePos has been altered, back-end should reposition mouse on next frame
    bool WantSaveIniSettings;        // When manual .ini load/save is active (io.IniFilename == NULL), this will be set to notify your application that you can call SaveIniSettingsToMemory() and save yourself
    bool NavActive;                  // Keyboard/Gamepad navigation is currently allowed
    bool NavVisible;                 // Keyboard/Gamepad navigation is visible
    float Framerate;                 // Rough estimate of application framerate, in frame per second
    
    // Platform/Renderer backend name and user data
    const char* BackendPlatformName;     // Optional: Platform/Renderer backend name (informational only! will be displayed in About Window)
    const char* BackendRendererName;     // Optional: Platform/Renderer backend name (informational only! will be displayed in About Window)
    void* BackendPlatformUserData;       // Optional: Platform/Renderer backend user data
    void* BackendRendererUserData;       // Optional: Platform/Renderer backend user data
    void* BackendLanguageUserData;       // Optional: Language user data
};

// Style functions
IMGUI_IMPL_API ImGuiStyle& GetStyle();
IMGUI_IMPL_API void StyleColorsDark(ImGuiStyle* dst = nullptr);
IMGUI_IMPL_API void StyleColorsLight(ImGuiStyle* dst = nullptr);
IMGUI_IMPL_API void StyleColorsClassic(ImGuiStyle* dst = nullptr);

// Get ImGui context
IMGUI_IMPL_API ImGuiContext* GetCurrentContext();
IMGUI_IMPL_API void SetCurrentContext(ImGuiContext* ctx);

// Get main viewport
IMGUI_IMPL_API ImGuiViewport* GetMainViewport();

// Core functions
IMGUI_IMPL_API ImGuiIO& GetIO();
IMGUI_IMPL_API ImGuiPlatformIO& GetPlatformIO();
IMGUI_IMPL_API int GetFrameCount();
IMGUI_IMPL_API bool IsMouseDragging(ImGuiMouseButton button, float lock_threshold = -1.0f);
IMGUI_IMPL_API ImGuiMouseCursor GetMouseCursor();

} // namespace ImGui

// Version
#define IMGUI_CHECKVERSION() true 