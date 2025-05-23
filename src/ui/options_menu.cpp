#include "options_menu.h"

#include <imgui.h>
#include <string>
#include <vector>
#include <user/config.h>
#include <ui/game_window.h>
#include <fmt/format.h>

// --- OptionsMenu State ---
bool OptionsMenu::s_isVisible = false;
bool OptionsMenu::s_isRestartRequired = false;
bool OptionsMenu::s_isPause = false;
Fable2::EMenuType OptionsMenu::s_pauseMenuType = Fable2::eMenuType_None;

void OptionsMenu::Init() {
    // Nothing needed
}

void OptionsMenu::Open(bool isPause, Fable2::EMenuType pauseMenuType) {
    s_isVisible = true;
}

void OptionsMenu::Close() {
    s_isVisible = false;
    Config::Save();
}

bool OptionsMenu::CanClose() {
    return true;
}

void OptionsMenu::Draw() {
    if (!s_isVisible) return;

    ImGui::Begin("Options Menu", nullptr, ImGuiWindowFlags_AlwaysAutoResize);
    ImGui::Text("Basic Settings");

    // Language options (from enum template)
    static const char* languageOptions[] = {
        "English", "Japanese", "German", "French", "Spanish", "Italian"
    };
    int langIndex = static_cast<int>(Config::Language.Value);
    if (ImGui::Combo("Language", &langIndex, languageOptions, IM_ARRAYSIZE(languageOptions))) {
        Config::Language.Value = static_cast<ELanguage>(langIndex);
    }

    // Resolution options
    const auto displayModes = GameWindow::GetDisplayModes();
    static std::vector<std::string> resOptions;
    static std::vector<const char*> resOptionCStrs;
    if (resOptions.empty()) {
        for (auto& mode : displayModes) {
            resOptions.push_back(fmt::format("{}x{}", mode.w, mode.h));
        }
        for (auto& str : resOptions)
            resOptionCStrs.push_back(str.c_str());
    }

    int& resolutionIndex = Config::WindowSize.Value;
    if (ImGui::Combo("Resolution", &resolutionIndex, resOptionCStrs.data(), resOptionCStrs.size())) {
        Config::WindowSize.ApplyCallback(&Config::WindowSize);
    }

    // Fullscreen toggle
    bool fullscreen = Config::Fullscreen.Value;
    if (ImGui::Checkbox("Fullscreen", &fullscreen)) {
        Config::Fullscreen.Value = fullscreen;
        Config::Fullscreen.Callback(&Config::Fullscreen);
    }

    if (ImGui::Button("Close")) {
        Close();
    }

    ImGui::End();
}


