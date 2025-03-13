#include "imgui.h"
#include <cstdio>
#include <cstdarg>

namespace ImGui {

static ImGuiIO s_io;
static void* s_context = nullptr;
static ImDrawData s_draw_data;

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

void StyleColorsDark() {
    // Dummy implementation
}

ImGuiIO& GetIO() {
    return s_io;
}

ImDrawData* GetDrawData() {
    return &s_draw_data;
}

bool Begin(const char* name) {
    printf("Begin window: %s\n", name);
    return true;
}

void End() {
    // Dummy implementation
}

void ShowDemoWindow(bool* p_open) {
    if (p_open) *p_open = true;
}

void ShowMetricsWindow(bool* p_open) {
    if (p_open) *p_open = true;
}

void NewFrame() {
    // Dummy implementation
}

void Render() {
    // Dummy implementation
}

bool BeginMainMenuBar() {
    return true;
}

void EndMainMenuBar() {
    // Dummy implementation
}

bool BeginMenu(const char* label) {
    printf("Begin menu: %s\n", label);
    return true;
}

void EndMenu() {
    // Dummy implementation
}

bool MenuItem(const char* label, const char* shortcut, bool* p_selected) {
    printf("Menu item: %s\n", label);
    if (p_selected) *p_selected = true;
    return false;
}

void Text(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
    printf("\n");
}

bool Button(const char* label) {
    printf("Button: %s\n", label);
    return false;
}

} // namespace ImGui 