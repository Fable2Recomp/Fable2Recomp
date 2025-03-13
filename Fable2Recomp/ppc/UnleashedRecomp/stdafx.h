#pragma once

#define NOMINMAX

#if defined(_WIN32)
#include <windows.h>
#include <ShlObj_core.h>
#include <wrl/client.h>
using Microsoft::WRL::ComPtr;
#elif defined(__linux__)
#include <unistd.h>
#include <pwd.h>
#endif

#ifdef UNLEASHED_RECOMP_D3D12
#include <dxcapi.h>
#endif

// Standard C++ headers
#include <cstdint>
#include <cstddef>
#include <cstring>
#include <cassert>
#include <type_traits>
#include <utility>
#include <memory>
#include <string>
#include <string_view>
#include <vector>
#include <array>
#include <list>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <atomic>
#include <mutex>
#include <thread>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <span>
#include <semaphore>
#include <numeric>
#include <charconv>
#include <queue>

// Third-party headers
#include <xbox.h>
#include <xxhash.h>
#include <ankerl/unordered_dense.h>
#include <ddspp.h>
#include <ppc/ppc_recomp_shared.h>
#include <toml.hpp>
#include <zstd.h>
#include <stb_image.h>
#include <blockingconcurrentqueue.h>
#include <SDL.h>
#include <SDL_mixer.h>

// ImGui headers
#include "UnleashedRecomp/thirdparty/imgui/imgui.h"
#include "UnleashedRecomp/thirdparty/imgui/imgui_internal.h"
#include "UnleashedRecomp/thirdparty/imgui/backends/imgui_impl_sdl2.h"
#include "UnleashedRecomp/thirdparty/imgui/backends/imgui_impl_opengl3.h"

// Project headers
#include "framework.h"
#include "mutex.h"
#include "byteswap.h"

#ifndef _WIN32
#include <sys/mman.h>
#endif
