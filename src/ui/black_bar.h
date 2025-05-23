#pragma once

#include <imgui.h>
#include <cstdint>

struct BlackBar
{
    // Indicates whether Inspire-mode pillarbox effect should be drawn.
    static inline bool g_inspirePillarbox = false;

    // Black bar drawing boundaries and transparency.
    static inline ImVec2 g_loadingBlackBarMin = {};
    static inline ImVec2 g_loadingBlackBarMax = {};
    static inline uint8_t g_loadingBlackBarAlpha = 0;

    // Aspect ratio control values.
    static inline float g_aspectRatio = 1.78f; // Default 16:9
    static constexpr float WIDE_ASPECT_RATIO = 1.8f;
    static constexpr float NARROW_ASPECT_RATIO = 1.3f;

    static void Draw();
};

