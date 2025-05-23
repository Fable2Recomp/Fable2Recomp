#include "message_window.h"

#include <imgui.h>
#include <string>

static std::string g_text;
static bool g_visible = false;
static bool g_resultAvailable = false;
static int g_result = -1;

void MessageWindow::Init() {
    // No fonts or setup needed
}

void MessageWindow::Draw() {
    if (!s_isVisible) return;

    ImGui::OpenPopup("Message");

    if (ImGui::BeginPopupModal("Message", nullptr, ImGuiWindowFlags_AlwaysAutoResize)) {
        ImGui::TextWrapped("%s", g_text.c_str());
        if (ImGui::Button("OK")) {
            g_result = 0;
            s_isVisible = false;
            g_resultAvailable = true;
            ImGui::CloseCurrentPopup();
        }
        ImGui::EndPopup();
    }
}

bool MessageWindow::Open(std::string text, int* outResult, std::span<std::string> buttons, int defaultButtonIndex, int cancelButtonIndex) {
    if (!s_isVisible && !g_resultAvailable) {
        g_text = std::move(text);
        g_result = -1;
        s_isVisible = true;
    }

    if (outResult) {
        *outResult = g_result;
    }

    if (g_resultAvailable) {
        g_resultAvailable = false;
        return true; // Indicates message box was closed
    }

    return false;
}

void MessageWindow::Close() {
    s_isVisible = false;
}

