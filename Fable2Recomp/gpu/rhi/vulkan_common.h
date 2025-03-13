#pragma once

// Define VK_NO_PROTOTYPES before including any Vulkan headers
#define VK_NO_PROTOTYPES
#define VK_USE_PLATFORM_XLIB_KHR

// Enable Volk with ImGui
#define IMGUI_IMPL_VULKAN_USE_VOLK
#define IMGUI_IMPL_VULKAN_NO_PROTOTYPES

// Include Volk before any other Vulkan headers
#include <volk.h>

// Include SDL Vulkan header
#include <SDL3/SDL_vulkan.h>

// Include ImGui headers
#include "imgui.h"
#include "imgui_impl_vulkan.h" 