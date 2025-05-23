#pragma once

#include <string>
#include <span>

struct MessageWindow {
    static inline bool s_isVisible = false;

    static void Init();
    static void Draw();
    static void Close();
    static bool Open(std::string text, int* result = nullptr, std::span<std::string> buttons = {}, int defaultButtonIndex = 0, int cancelButtonIndex = -1);
};

