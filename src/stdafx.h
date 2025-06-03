#pragma once

// Standard library includes
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <memory>
#include <string>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <list>
#include <array>
#include <tuple>
#include <functional>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <atomic>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <numeric>
#include <type_traits>
#include <utility>
#include <variant>
#include <optional>
#include <span>

// External includes
#include "simde_wrapper/simd_wrapper.h"
#include <xenon/xbox.h>
#include <xxhash.h>
#include <ankerl/unordered_dense.h>
//#include <ddspp.h>
#include <ppc/ppc_recomp_shared.h>
#include <toml++/toml.hpp>

#include <volk.h>

#include <SDL3/SDL.h>
#include <SDL3_mixer/SDL_mixer.h>
#include <stb_image.h>
#include <imgui.h>
#include <imgui_internal.h>
#include <implot.h>
#include <o1heap.h>
#include <fmt/format.h>
#include <fmt/core.h>
#include <glm/glm.hpp>
#include <tinyxml2.h>
#include <spdlog/spdlog.h>

#include "framework.h"
#include "mutex.h"

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
#else
    #include <sys/mman.h>
    #define PAGE_EXECUTE_READ PROT_READ | PROT_EXEC
    #define PAGE_READWRITE PROT_READ | PROT_WRITE
    #define VirtualProtect mprotect
#endif

// Logging macros
#define LOG_INFO(...) SPDLOG_INFO(__VA_ARGS__)
#define LOG_ERROR(...) SPDLOG_ERROR(__VA_ARGS__)
#define LOG_WARN(...) SPDLOG_WARN(__VA_ARGS__)
#define LOG_DEBUG(...) SPDLOG_DEBUG(__VA_ARGS__) 
