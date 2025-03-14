#pragma once
#include "imgui.h"      // IMGUI_IMPL_API

struct SDL_Window;
struct SDL_Renderer;
typedef union SDL_Event SDL_Event;

IMGUI_IMPL_API bool     ImGui_ImplSDL3_Init(SDL_Window* window, SDL_Renderer* renderer);
IMGUI_IMPL_API void     ImGui_ImplSDL3_Shutdown();
IMGUI_IMPL_API void     ImGui_ImplSDL3_NewFrame();
IMGUI_IMPL_API bool     ImGui_ImplSDL3_ProcessEvent(const SDL_Event* event);

// Helper functions to update key modifiers and keyboard mapping
IMGUI_IMPL_API void     ImGui_ImplSDL3_UpdateKeyModifiers(int sdl_key_mods);
IMGUI_IMPL_API ImGuiKey ImGui_ImplSDL3_KeycodeToImGuiKey(int keycode); 