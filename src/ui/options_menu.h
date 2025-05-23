#pragma once

namespace Fable2 {
    enum EMenuType {
        eMenuType_None
    };
}

struct OptionsMenu {
    static bool s_isVisible;
    static bool s_isRestartRequired;
    static bool s_isPause;
    static Fable2::EMenuType s_pauseMenuType;

    static void Init();
    static void Draw();
    static void Open(bool isPause, Fable2::EMenuType pauseMenuType);
    static void Close();
    static bool CanClose();
};

