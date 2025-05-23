#pragma once

#include <cstdint>
#include <imgui.h>

// Shader modifier constants
#define IMGUI_SHADER_MODIFIER_NONE             0
#define IMGUI_SHADER_MODIFIER_LOW_QUALITY_TEXT 11

// Utility functions used by achievement_overlay
float Hermite(float a, float b, float t);
double ComputeMotion(double duration, double offset, double total);

// Linear interpolation
inline float Lerp(float a, float b, float t) {
    return a + (b - a) * t;
}

// Minimal API needed
void SetShaderModifier(uint32_t shaderModifier);
void DrawPauseContainer(ImVec2 min, ImVec2 max, float alpha);
void DrawTextWithShadow(ImFont* font, float fontSize, const ImVec2& pos, ImU32 colour, const char* text, float offset, float radius, ImU32 shadowColour);

// -- Scale helper for DPI or UI scaling
inline float Scale(float val) {
    return val * ImGui::GetIO().DisplayFramebufferScale.y;
}

// Convert pixel rect to UV coords (assumes texture width/height are known)
#define PIXELS_TO_UV_COORDS(texW, texH, x, y, w, h) \
    std::make_tuple(ImVec2((x) / float(texW), (y) / float(texH)), \
                    ImVec2(((x) + (w)) / float(texW), ((y) + (h)) / float(texH)))

// Extract UVs from a std::tuple<ImVec2, ImVec2>
#define GET_UV_COORDS(uvTuple) std::get<0>(uvTuple), std::get<1>(uvTuple)

inline void SetScale(ImVec2) {}
inline void SetOrigin(ImVec2) {}
inline void SetShaderModifier(int) {}
inline void DrawTextWithOutline(ImFont* font, float size, ImVec2 pos, ImU32 col, const char* text, int, ImU32 outlineCol) {
    auto* drawList = ImGui::GetBackgroundDrawList();
    drawList->AddText(font, size, ImVec2(pos.x + 1, pos.y + 1), outlineCol, text);
    drawList->AddText(font, size, pos, col, text);
}


