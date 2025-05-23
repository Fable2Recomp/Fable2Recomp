
#include "installer_wizard.h"

#include <SDL3/SDL.h>
#include <imgui.h>
#include <filesystem>

#include <gpu/video.h>
#include <ui/game_window.h>

static bool g_isQuitting = false;

void InstallerWizard::Init() {
    // No font or texture setup needed for basic installer
}

void InstallerWizard::Draw() {
    if (!s_isVisible) return;

    ImGui::Begin("Fable 2 Installer");

    static int selectedLanguage = 2; // English
    const char* languages[] = { "French", "German", "English", "Spanish", "Italian", "Japanese" };
    ImGui::Text("Select Language:");
    ImGui::Combo("Language", &selectedLanguage, languages, IM_ARRAYSIZE(languages));

    static char installPath[256] = "/home/user/Fable2Install";
    ImGui::InputText("Install Path", installPath, sizeof(installPath));

    static bool installing = false;
    static float progress = 0.0f;
    static bool installSuccess = false;

    if (!installing) {
        if (ImGui::Button("Start Install")) {
            installing = true;
            progress = 0.0f;
        }
    } else {
        progress += ImGui::GetIO().DeltaTime * 0.2f; // Fake progress
        ImGui::ProgressBar(progress);

        if (progress >= 1.0f) {
            installing = false;
            installSuccess = true;
        }
    }

    if (installSuccess) {
        ImGui::TextColored(ImVec4(0, 1, 0, 1), "Installation complete!");
        if (ImGui::Button("Exit")) {
            g_isQuitting = true;
            s_isVisible = false;
        }
    }

    ImGui::End();
}

void InstallerWizard::Shutdown() {
    // Nothing to clean up in basic version
}

bool InstallerWizard::Run(std::filesystem::path installPath, bool skipGame) {
    s_isVisible = true;

    while (s_isVisible) {
        SDL_PumpEvents();

        GameWindow::Update();    // Handles SDL input + ImGui frame
        InstallerWizard::Draw(); // Simplified installer
        Video::Present();        // Presents ImGui to screen
    }

    return !g_isQuitting;
}
