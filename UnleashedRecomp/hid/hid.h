#pragma once

#include <SDL2/SDL.h>
#include <cstdint>
#include "../kernel/xbox.h"

namespace hid {

// Use existing types from xbox.h
using XAMINPUT_STATE = ::XAMINPUT_STATE;
using XAMINPUT_VIBRATION = ::XAMINPUT_VIBRATION;
using XAMINPUT_CAPABILITIES = ::XAMINPUT_CAPABILITIES;

// Input configuration
extern SDL_Keycode Key_LeftStickUp;
extern SDL_Keycode Key_LeftStickDown;
extern SDL_Keycode Key_LeftStickLeft;
extern SDL_Keycode Key_LeftStickRight;
extern SDL_Keycode Key_RightStickUp;
extern SDL_Keycode Key_RightStickDown;
extern SDL_Keycode Key_RightStickLeft;
extern SDL_Keycode Key_RightStickRight;
extern SDL_Keycode Key_A;
extern SDL_Keycode Key_B;
extern SDL_Keycode Key_X;
extern SDL_Keycode Key_Y;
extern SDL_Keycode Key_LeftTrigger;
extern SDL_Keycode Key_RightTrigger;
extern SDL_Keycode Key_LeftBumper;
extern SDL_Keycode Key_RightBumper;
extern SDL_Keycode Key_Start;
extern SDL_Keycode Key_Back;
extern SDL_Keycode Key_Guide;

// Input state
extern uint32_t g_prohibitedButtons;
extern bool g_isLeftStickProhibited;
extern bool g_isRightStickProhibited;
extern bool g_isInputAllowed;

// Function declarations
void Init();
uint32_t GetState(uint32_t userIndex, XAMINPUT_STATE* state);
uint32_t SetState(uint32_t userIndex, XAMINPUT_VIBRATION* vibration);
uint32_t GetCapabilities(uint32_t userIndex, XAMINPUT_CAPABILITIES* capabilities);
void SetProhibitedInputs(uint32_t prohibitedButtons, bool isLeftStickProhibited, bool isRightStickProhibited);
bool IsInputAllowed();
bool IsInputDeviceController(uint32_t userIndex);
const char* GetInputDeviceName(uint32_t userIndex);

} // namespace hid
