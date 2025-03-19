#include "implot.h"

namespace ImPlot {

static void* s_context = nullptr;

void* CreateContext() {
    s_context = new char[1]; // Dummy context
    return s_context;
}

void DestroyContext(void* ctx) {
    if (ctx == s_context || ctx == nullptr) {
        delete[] static_cast<char*>(s_context);
        s_context = nullptr;
    }
}

bool BeginPlot(const char* title_id) {
    return true;
}

void EndPlot() {
    // Dummy implementation
}

void PlotLine(const char* label_id, const float* values, int count) {
    // Dummy implementation
}

} // namespace ImPlot 