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

// Third-party includes
#include <SDL3/SDL.h>
#include <vulkan/vulkan.h>
#include <imgui.h>
#include <implot.h>
#include <fmt/format.h>
#include <glm/glm.hpp>
#include <tinyxml2.h>
#include <gtest/gtest.h>

// Project includes
#include "os/logger.h"
#include "os/os.h"
#include "kernel/kernel.h"
#include "ppc_recomp/include/ppc/decoder.h"
#include "ppc_recomp/include/ppc/recompiler.h"
#include "ppc_recomp/include/ppc/instructions.h"

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