#pragma once

#include "imgui.h"

namespace ImPlot {

// Context management
void* CreateContext();
void DestroyContext(void* ctx = nullptr);

// Basic plotting functions
bool BeginPlot(const char* title_id);
void EndPlot();
void PlotLine(const char* label_id, const float* values, int count);

} // namespace ImPlot 