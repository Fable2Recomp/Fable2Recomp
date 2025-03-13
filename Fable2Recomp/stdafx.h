#pragma once

// Standard library includes
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <memory>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <iostream>
#include <fstream>
#include <sstream>

// Third-party includes
#include <SDL3/SDL.h>
#include "gpu/rhi/vulkan_common.h"
#include "../thirdparty/ImGui/imgui/imgui.h"
#include "../thirdparty/ImPlot/implot.h"
#include "../thirdparty/ImGui/imgui/backends/imgui_impl_sdl3.h"
#include "../thirdparty/ImGui/imgui/backends/imgui_impl_vulkan.h"

// Common types
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;
using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;
using f32 = float;
using f64 = double;

// Common macros
#define SAFE_DELETE(p) { if(p) { delete (p); (p) = nullptr; } }
#define SAFE_DELETE_ARRAY(p) { if(p) { delete[] (p); (p) = nullptr; } }
#define SAFE_RELEASE(p) { if(p) { (p)->Release(); (p) = nullptr; } }

// Platform-specific defines
#ifdef _WIN32
    #define NOMINMAX
    #include <windows.h>
#endif 