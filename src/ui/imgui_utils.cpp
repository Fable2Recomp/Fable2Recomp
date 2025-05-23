#include "imgui_utils.h"
#include <algorithm>
#include <cmath>

// Hermite interpolation
float Hermite(float a, float b, float t) {
    return a + (b - a) * (t * t * (3 - 2 * t));
}

// Linear motion curve (0 → 1 based on ImGui time)
static double ComputeLinearMotion(double duration, double offset, double total) {
    return std::clamp((ImGui::GetTime() - duration - offset / 60.0) / total * 60.0, 0.0, 1.0);
}

// Ease curve for animation motion
double ComputeMotion(double duration, double offset, double total) {
    return sqrt(ComputeLinearMotion(duration, offset, total));
}

// Shader modifier stub (does nothing for now)
void SetShaderModifier(uint32_t) {
    // No-op (placeholder for compatibility)
}

// Simplified container (just a black rounded box)
void DrawPauseContainer(ImVec2 min, ImVec2 max, float alpha) {
    auto drawList = ImGui::GetBackgroundDrawList();
    drawList->AddRectFilled(min, max, IM_COL32(0, 0, 0, (int)(255 * alpha)), 10.0f);
}

// Text with shadow (two draw calls)
void DrawTextWithShadow(ImFont* font, float fontSize, const ImVec2& pos, ImU32 colour, const char* text, float offset, float radius, ImU32 shadowColour) {
    auto drawList = ImGui::GetBackgroundDrawList();
    drawList->AddText(font, fontSize, { pos.x + offset, pos.y + offset }, shadowColour, text);
    drawList->AddText(font, fontSize, pos, colour, text);
}

