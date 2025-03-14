#pragma once

// Standard library
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <filesystem>

// SDL
#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>

// ImGui
#include <imgui.h>
#include <imgui_impl_sdl3.h>
#include <imgui_impl_vulkan.h>

// GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// Vulkan
#include <vulkan/vulkan.h>

// Project headers
#include "logger.h"
#include "gpu/gpu.h" 