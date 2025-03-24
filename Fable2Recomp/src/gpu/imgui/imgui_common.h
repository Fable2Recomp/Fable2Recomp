#pragma once

#include <cstdint>
#include <cstddef>
#include "imgui.h"
#include "imgui_internal.h"

enum class ImGuiCallback : int32_t
{
    None,
    Hover,
    Click,
    DoubleClick,
    RightClick,
    DragStart,
    DragEnd,
    DragDrop,
    Count
};

struct ImGuiGradient
{
    uint32_t gradientTopLeft;
    uint32_t gradientTopRight;
    uint32_t gradientBottomRight;
    uint32_t gradientBottomLeft;
};

struct ImGuiShader
{
    uint32_t shaderModifier;
}; 