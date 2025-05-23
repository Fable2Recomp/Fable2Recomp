#include <stdafx.h>
#include <SDL3/SDL.h>
#include <SDL3/SDL_joystick.h>
#include <user/config.h>
#include <hid/hid.h>
#include <os/logger.h>
#include <ui/game_window.h>
#include <kernel/xdm.h>
#include <app.h>
#include <optional>

#define TRANSLATE_INPUT(S, X) SDL_GetGamepadButton(gamepad, S) << FirstBitLow(X)
#define VIBRATION_TIMEOUT_MS 5000
constexpr SDL_JoystickID INVALID_JOYSTICK_ID = static_cast<SDL_JoystickID>(~0u);

// Forward declaration for SDL event callback
bool HID_OnSDLEvent(void* userdata, SDL_Event* event);

class Controller {
public:
    SDL_Gamepad* gamepad{};
    SDL_Joystick* joystick{};
    SDL_JoystickID id{ INVALID_JOYSTICK_ID };
    XAMINPUT_GAMEPAD state{};
    XAMINPUT_VIBRATION vibration{ 0, 0 };
    int index{};

    Controller() = default;

    explicit Controller(int index) : Controller(SDL_OpenGamepad(index)) {
        this->index = index;
    }

    Controller(SDL_Gamepad* gamepad) : gamepad(gamepad) {
        if (!gamepad) return;
        joystick = SDL_GetGamepadJoystick(gamepad);
        id = SDL_GetJoystickID(joystick);
    }

    SDL_GamepadType GetControllerType() const {
        return SDL_GetGamepadType(gamepad);
    }

    hid::EInputDevice GetInputDevice() const {
        switch (GetControllerType()) {
            case SDL_GAMEPAD_TYPE_PS3:
            case SDL_GAMEPAD_TYPE_PS4:
            case SDL_GAMEPAD_TYPE_PS5:
                return hid::EInputDevice::PlayStation;
            case SDL_GAMEPAD_TYPE_XBOX360:
            case SDL_GAMEPAD_TYPE_XBOXONE:
                return hid::EInputDevice::Xbox;
            default:
                return hid::EInputDevice::Unknown;
        }
    }

    const char* GetControllerName() const {
        const char* result = SDL_GetGamepadName(gamepad);
        return result ? result : "Unknown Device";
    }

    void Close() {
        if (!gamepad) return;
        SDL_CloseGamepad(gamepad);
        gamepad = nullptr;
        joystick = nullptr;
        id = INVALID_JOYSTICK_ID;
    }

    bool CanPoll() const {
        return gamepad != nullptr;
    }

    void PollAxis() {
        if (!CanPoll()) return;
        auto& pad = state;
        pad.sThumbLX = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTX);
        pad.sThumbLY = ~SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFTY);
        pad.sThumbRX = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHTX);
        pad.sThumbRY = ~SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHTY);
        pad.bLeftTrigger = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_LEFT_TRIGGER) >> 7;
        pad.bRightTrigger = SDL_GetGamepadAxis(gamepad, SDL_GAMEPAD_AXIS_RIGHT_TRIGGER) >> 7;
    }

    void Poll() {
        if (!CanPoll()) return;
        auto& pad = state;
        pad.wButtons = 0;

        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_DPAD_UP, XAMINPUT_GAMEPAD_DPAD_UP);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_DPAD_DOWN, XAMINPUT_GAMEPAD_DPAD_DOWN);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_DPAD_LEFT, XAMINPUT_GAMEPAD_DPAD_LEFT);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_DPAD_RIGHT, XAMINPUT_GAMEPAD_DPAD_RIGHT);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_START, XAMINPUT_GAMEPAD_START);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_BACK, XAMINPUT_GAMEPAD_BACK);

        if (SDL_GamepadHasButton(gamepad, SDL_GAMEPAD_BUTTON_TOUCHPAD))
            pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_TOUCHPAD, XAMINPUT_GAMEPAD_BACK);

        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_LEFT_STICK, XAMINPUT_GAMEPAD_LEFT_THUMB);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_RIGHT_STICK, XAMINPUT_GAMEPAD_RIGHT_THUMB);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_LEFT_SHOULDER, XAMINPUT_GAMEPAD_LEFT_SHOULDER);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_RIGHT_SHOULDER, XAMINPUT_GAMEPAD_RIGHT_SHOULDER);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_SOUTH, XAMINPUT_GAMEPAD_A);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_EAST, XAMINPUT_GAMEPAD_B);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_WEST, XAMINPUT_GAMEPAD_X);
        pad.wButtons |= TRANSLATE_INPUT(SDL_GAMEPAD_BUTTON_NORTH, XAMINPUT_GAMEPAD_Y);
    }

    void SetVibration(const XAMINPUT_VIBRATION& vibration) {
        if (!CanPoll()) return;
        this->vibration = vibration;
        SDL_RumbleGamepad(gamepad, vibration.wLeftMotorSpeed * 256, vibration.wRightMotorSpeed * 256, VIBRATION_TIMEOUT_MS);
    }

    void SetLED(uint8_t r, uint8_t g, uint8_t b) const {
        if (!CanPoll()) return;
        SDL_SetGamepadLED(gamepad, r, g, b);
    }
};

void hid::Init()
{
    // SDL3-compatible hints only
    SDL_SetHint(SDL_HINT_JOYSTICK_ALLOW_BACKGROUND_EVENTS, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_GAMECUBE, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS3, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS4, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_PS5_PLAYER_LED, "1");
    SDL_SetHint(SDL_HINT_JOYSTICK_HIDAPI_WII, "1");
    SDL_SetHint(SDL_HINT_XINPUT_ENABLED, "1");

    SDL_InitSubSystem(SDL_INIT_EVENTS);
    SDL_InitSubSystem(SDL_INIT_GAMEPAD);

    SDL_AddEventWatch(HID_OnSDLEvent, nullptr);
}

static std::array<Controller, 4> g_controllers;
static Controller* g_activeController = nullptr;

static Controller* FindController(SDL_JoystickID id) {
    for (auto& c : g_controllers) {
        if (c.id == id)
            return &c;
    }
    return nullptr;
}

static size_t FindFreeController() {
    for (size_t i = 0; i < g_controllers.size(); ++i) {
        if (!g_controllers[i].CanPoll())
            return i;
    }
    return static_cast<size_t>(-1);
}

static void SetActiveController(Controller* controller) {
    g_activeController = controller;
    if (!controller || App::s_isLoading)
        return;

    hid::g_inputDevice = controller->GetInputDevice();
    hid::g_inputDeviceController = hid::g_inputDevice;

    auto type = static_cast<hid::EInputDeviceExplicit>(controller->GetControllerType());
    if (type != hid::g_inputDeviceExplicit) {
        hid::g_inputDeviceExplicit = type;
        LOGFN("Detected controller: {}", controller->GetControllerName());
    }
}

static void SetTimeOfDayLED(Controller& controller, bool isNight) {
    uint8_t r = isNight ? 22 : 0;
    uint8_t g = isNight ? 0 : 37;
    uint8_t b = isNight ? 101 : 184;
    controller.SetLED(r, g, b);
}

bool HID_OnSDLEvent(void* /*userdata*/, SDL_Event* event) {
    switch (event->type) {
        case SDL_EVENT_GAMEPAD_ADDED: {
            size_t slot = FindFreeController();
            if (slot != static_cast<size_t>(-1)) {
                Controller c(event->adevice.which);
                g_controllers[slot] = c;
                SetTimeOfDayLED(c, App::s_isWerehog);
            }
            break;
        }

        case SDL_EVENT_GAMEPAD_REMOVED: {
            Controller* c = FindController(event->adevice.which);
            if (c)
                c->Close();
            break;
        }

        case SDL_EVENT_GAMEPAD_AXIS_MOTION: {
            Controller* c = FindController(event->paxis.which);
            if (!c) break;

            if (std::abs(event->paxis.value) > 8000) {
                SDL_SetCursor(SDL_GetDefaultCursor());
                SetActiveController(c);
            }

            c->PollAxis();
            break;
        }

        case SDL_EVENT_GAMEPAD_BUTTON_DOWN:
        case SDL_EVENT_GAMEPAD_BUTTON_UP: {
            Controller* c = FindController(event->pbutton.which);
            if (!c) break;

            SDL_SetCursor(SDL_GetDefaultCursor());
            SetActiveController(c);
            c->Poll();
            break;
        }

        case SDL_EVENT_KEY_DOWN:
        case SDL_EVENT_KEY_UP:
            hid::g_inputDevice = hid::EInputDevice::Keyboard;
            break;

        case SDL_EVENT_MOUSE_BUTTON_DOWN:
        case SDL_EVENT_MOUSE_BUTTON_UP:
        case SDL_EVENT_MOUSE_MOTION: {
            if (!GameWindow::IsFullscreen() || GameWindow::s_isFullscreenCursorVisible)
                SDL_SetCursor(NULL);

            hid::g_inputDevice = hid::EInputDevice::Mouse;
            break;
        }

        case SDL_EVENT_WINDOW_FOCUS_LOST: {
            for (auto& c : g_controllers)
                c.SetVibration({ 0, 0 });
            break;
        }

        case SDL_EVENT_USER + 1: {
            for (auto& c : g_controllers)
                SetTimeOfDayLED(c, event->user.code != 0);
            break;
        }
    }

    return true;
}


uint32_t hid::GetState(uint32_t dwUserIndex, XAMINPUT_STATE* pState) {
    static uint32_t packet;
    if (!pState)
        return ERROR_BAD_ARGUMENTS;

    memset(pState, 0, sizeof(*pState));
    pState->dwPacketNumber = packet++;

    if (!g_activeController)
        return ERROR_DEVICE_NOT_CONNECTED;

    pState->Gamepad = g_activeController->state;
    return ERROR_SUCCESS;
}

uint32_t hid::SetState(uint32_t dwUserIndex, XAMINPUT_VIBRATION* pVibration) {
    if (!pVibration)
        return ERROR_BAD_ARGUMENTS;

    if (!g_activeController)
        return ERROR_DEVICE_NOT_CONNECTED;

    g_activeController->SetVibration(*pVibration);
    return ERROR_SUCCESS;
}

uint32_t hid::GetCapabilities(uint32_t dwUserIndex, XAMINPUT_CAPABILITIES* pCaps) {
    if (!pCaps)
        return ERROR_BAD_ARGUMENTS;

    if (!g_activeController)
        return ERROR_DEVICE_NOT_CONNECTED;

    memset(pCaps, 0, sizeof(*pCaps));
    pCaps->Type = XAMINPUT_DEVTYPE_GAMEPAD;
    pCaps->SubType = XAMINPUT_DEVSUBTYPE_GAMEPAD;
    pCaps->Flags = 0;
    pCaps->Gamepad = g_activeController->state;
    pCaps->Vibration = g_activeController->vibration;
    return ERROR_SUCCESS;
}


