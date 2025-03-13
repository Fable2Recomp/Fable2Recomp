#pragma once

#include <cstddef>
#include <cstdint>

namespace ImGui {

// Basic ImGui types
struct ImVec2 { float x, y; ImVec2() : x(0), y(0) {} ImVec2(float x_, float y_) : x(x_), y(y_) {} };
struct ImVec4 { float x, y, z, w; ImVec4() : x(0), y(0), z(0), w(0) {} ImVec4(float x_, float y_, float z_, float w_) : x(x_), y(y_), z(z_), w(w_) {} };

// Draw data
struct ImDrawData {
    bool Valid;
    int CmdListsCount;
    int TotalIdxCount;
    int TotalVtxCount;
    ImVec2 DisplayPos;
    ImVec2 DisplaySize;
    ImVec2 FramebufferScale;
};

// IO structure
struct ImGuiIO {
    ImVec2 DisplaySize;
    float Framerate;
};

// Context management
void* CreateContext();
void DestroyContext(void* ctx = nullptr);
void StyleColorsDark();
ImGuiIO& GetIO();
ImDrawData* GetDrawData();

// Windows
bool Begin(const char* name);
void End();
void ShowDemoWindow(bool* p_open);
void ShowMetricsWindow(bool* p_open);

// Main loop
void NewFrame();
void Render();

// Menu functions
bool BeginMainMenuBar();
void EndMainMenuBar();
bool BeginMenu(const char* label);
void EndMenu();
bool MenuItem(const char* label, const char* shortcut = nullptr, bool* p_selected = nullptr);

// Basic widgets
void Text(const char* fmt, ...);
bool Button(const char* label);

} // namespace ImGui

// Version
#define IMGUI_CHECKVERSION() true 