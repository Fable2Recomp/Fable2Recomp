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
#include <SDL.h>
#include <vulkan/vulkan.h>
#include <imgui.h>
#include <implot.h>
#include <json.hpp>
#include <magic_enum.hpp>
#include <stb_image.h>
#include <stb_image_write.h>
#include <stb_truetype.h>
#include <volk.h>

// Project includes
#include "os/logger.h"
#include "kernel/kernel.h"
#include "cpu/ppc_integration.h"
#include "gpu/video.h"
#include "apu/audio.h"
#include "hid/hid.h"
#include "patches/memory_patches.h"
#include "ui/game_window.h"
#include "user/config.h"

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