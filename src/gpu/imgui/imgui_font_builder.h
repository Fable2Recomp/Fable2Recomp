#pragma once

#include "imgui.h"  // for ImFontAtlas

struct ImFontBuilderIO
{
    bool (*Build)(ImFontAtlas* atlas);
};

extern ImFontBuilderIO g_fontBuilderIO;
