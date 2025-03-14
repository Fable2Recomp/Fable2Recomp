#include "imgui.h"
#include <cstring>

namespace ImGui {

// Global state
static ImGuiIO g_IO;
static ImDrawData g_DrawData;
static void* g_Context = nullptr;

void* CreateContext() {
    if (!g_Context) {
        g_Context = new int(0); // Just a dummy pointer
        StyleColorsDark();
    }
    return g_Context;
}

void DestroyContext(void* ctx) {
    if (g_Context) {
        delete static_cast<int*>(g_Context);
        g_Context = nullptr;
    }
}

void StyleColorsDark() {
    // Nothing to do for now
}

ImGuiIO& GetIO() {
    return g_IO;
}

ImDrawData* GetDrawData() {
    return &g_DrawData;
}

bool Begin(const char* name) {
    return true; // Always succeed for now
}

void End() {
    // Nothing to do for now
}

void ShowDemoWindow(bool* p_open) {
    // Not implemented in minimal version
}

void ShowMetricsWindow(bool* p_open) {
    // Not implemented in minimal version
}

void NewFrame() {
    // Reset draw data
    memset(&g_DrawData, 0, sizeof(g_DrawData));
    g_DrawData.Valid = true;
}

void Render() {
    // Nothing to do for now
}

bool BeginMainMenuBar() {
    return true; // Always succeed for now
}

void EndMainMenuBar() {
    // Nothing to do for now
}

bool BeginMenu(const char* label) {
    return true; // Always succeed for now
}

void EndMenu() {
    // Nothing to do for now
}

bool MenuItem(const char* label, const char* shortcut, bool* p_selected) {
    return true; // Always succeed for now
}

void Text(const char* fmt, ...) {
    // Not implemented in minimal version
}

bool Button(const char* label) {
    return false; // Always return false for now
}

} // namespace ImGui 