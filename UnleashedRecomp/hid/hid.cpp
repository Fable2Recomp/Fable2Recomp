#include "hid.h"
#include <SDL2/SDL.h>
#include <cstdint>
#include <array>
#include <string>
#include <unordered_map>

namespace hid {

// Input configuration
SDL_Keycode Key_LeftStickUp = SDLK_UP;
SDL_Keycode Key_LeftStickDown = SDLK_DOWN;
SDL_Keycode Key_LeftStickLeft = SDLK_LEFT;
SDL_Keycode Key_LeftStickRight = SDLK_RIGHT;
SDL_Keycode Key_RightStickUp = SDLK_UNKNOWN;
SDL_Keycode Key_RightStickDown = SDLK_UNKNOWN;
SDL_Keycode Key_RightStickLeft = SDLK_UNKNOWN;
SDL_Keycode Key_RightStickRight = SDLK_UNKNOWN;
SDL_Keycode Key_A = SDLK_s;
SDL_Keycode Key_B = SDLK_d;
SDL_Keycode Key_X = SDLK_a;
SDL_Keycode Key_Y = SDLK_w;
SDL_Keycode Key_LeftTrigger = SDLK_1;
SDL_Keycode Key_RightTrigger = SDLK_3;
SDL_Keycode Key_LeftBumper = SDLK_q;
SDL_Keycode Key_RightBumper = SDLK_e;
SDL_Keycode Key_Start = SDLK_RETURN;
SDL_Keycode Key_Back = SDLK_BACKSPACE;
SDL_Keycode Key_Guide = SDLK_UNKNOWN;

// Input state
uint32_t g_prohibitedButtons = 0;
bool g_isLeftStickProhibited = false;
bool g_isRightStickProhibited = false;
bool g_isInputAllowed = true;

// Private state
static std::array<XAMINPUT_STATE, 4> g_states;
static std::array<XAMINPUT_VIBRATION, 4> g_vibrations;
static std::array<XAMINPUT_CAPABILITIES, 4> g_capabilities;
static std::array<bool, 4> g_controllerConnected;

void Init() {
    // Initialize SDL gamepad subsystem if not already initialized
    if (!(SDL_WasInit(SDL_INIT_GAMECONTROLLER) & SDL_INIT_GAMECONTROLLER)) {
        SDL_InitSubSystem(SDL_INIT_GAMECONTROLLER);
    }

    // Reset all states
    for (size_t i = 0; i < 4; ++i) {
        g_states[i] = {};
        g_vibrations[i] = {};
        g_capabilities[i] = {};
        g_controllerConnected[i] = false;
    }

    // Set default capabilities
    for (auto& cap : g_capabilities) {
        cap.Type = 1; // XINPUT_DEVTYPE_GAMEPAD
        cap.SubType = 1; // XINPUT_DEVSUBTYPE_GAMEPAD
        cap.Flags = 0;
        cap.Gamepad = {};
        cap.Vibration = {};
    }
}

uint32_t GetState(uint32_t userIndex, XAMINPUT_STATE* state) {
    if (userIndex >= 4 || !state)
        return ERROR_BAD_ARGUMENTS;

    if (!g_controllerConnected[userIndex])
        return ERROR_DEVICE_NOT_CONNECTED;

    *state = g_states[userIndex];
    return ERROR_SUCCESS;
}

uint32_t SetState(uint32_t userIndex, XAMINPUT_VIBRATION* vibration) {
    if (userIndex >= 4 || !vibration)
        return ERROR_BAD_ARGUMENTS;

    if (!g_controllerConnected[userIndex])
        return ERROR_DEVICE_NOT_CONNECTED;

    g_vibrations[userIndex] = *vibration;
    return ERROR_SUCCESS;
}

uint32_t GetCapabilities(uint32_t userIndex, XAMINPUT_CAPABILITIES* capabilities) {
    if (userIndex >= 4 || !capabilities)
        return ERROR_BAD_ARGUMENTS;

    if (!g_controllerConnected[userIndex])
        return ERROR_DEVICE_NOT_CONNECTED;

    *capabilities = g_capabilities[userIndex];
    return ERROR_SUCCESS;
}

void SetProhibitedInputs(uint32_t prohibitedButtons, bool isLeftStickProhibited, bool isRightStickProhibited) {
    g_prohibitedButtons = prohibitedButtons;
    g_isLeftStickProhibited = isLeftStickProhibited;
    g_isRightStickProhibited = isRightStickProhibited;
}

bool IsInputAllowed() {
    return g_isInputAllowed;
}

bool IsInputDeviceController(uint32_t userIndex) {
    if (userIndex >= 4)
        return false;
    return g_controllerConnected[userIndex];
}

const char* GetInputDeviceName(uint32_t userIndex) {
    if (userIndex >= 4 || !g_controllerConnected[userIndex])
        return "Unknown";
    return "Xbox 360 Controller";
}

} // namespace hid
