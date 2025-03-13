#pragma once

#include "imgui.h"

namespace ImGui {
namespace Internal {

// Internal types and functions
struct ImGuiContext;
ImGuiContext* GetCurrentContext();
void SetCurrentContext(ImGuiContext* ctx);

} // namespace Internal
} // namespace ImGui 