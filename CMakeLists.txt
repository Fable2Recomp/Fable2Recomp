cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# === Paths ===
set(EXTERN_DIR "${CMAKE_SOURCE_DIR}/extern")

# === Header-only includes ===
set(SPDLOG_INCLUDE_DIR "${EXTERN_DIR}/spdlog/include")
set(GLM_INCLUDE_DIR    "${EXTERN_DIR}/glm")
set(TOML_INCLUDE_DIR "${EXTERN_DIR}/tomlplusplus/include")
set(SIMDE_INCLUDE_DIR  "${EXTERN_DIR}/simde")
set(O1HEAP_INCLUDE_DIR  "${EXTERN_DIR}/o1heap")
set(VMA_INCLUDE_DIR "${EXTERN_DIR}/VMA/include")
set(ANKERL_UNORDERED_DENSE_INCLUDE_DIR "${EXTERN_DIR}/ankerl-unordered_dense/include")
set(XXHASH_INCLUDE_DIR "${EXTERN_DIR}/xxHash")
set(TINYSHA1_INCLUDE_DIR "${EXTERN_DIR}/TinySHA1")

# === spirv-headers ===
set(SPIRV-Headers_SOURCE_DIR ${EXTERN_DIR}/spirv-headers)
add_subdirectory(${EXTERN_DIR}/spirv-headers)

# === spirv-tools ===
set(SPIRV-Tools_SOURCE_DIR ${EXTERN_DIR}/spirv-tools)
add_subdirectory(${EXTERN_DIR}/spirv-tools)

# === glslang ===
set(glslang_SOURCE_DIR ${EXTERN_DIR}/glslang)
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(ENABLE_GLSLANG_BINARIES OFF CACHE BOOL "" FORCE)
add_subdirectory(${EXTERN_DIR}/glslang)

# === shaderc ===
set(SHADERC_SKIP_TESTS ON CACHE BOOL "" FORCE)
set(SHADERC_SKIP_EXAMPLES ON CACHE BOOL "" FORCE)
set(SHADERC_ENABLE_SHARED_CRT OFF CACHE BOOL "" FORCE) # Prevent MSVC runtime conflicts
set(SHADERC_ENABLE_WGSL_OUTPUT OFF CACHE BOOL "" FORCE) # Not needed for GLSL->SPIR-V

add_subdirectory(${EXTERN_DIR}/shaderc EXCLUDE_FROM_ALL)
set(SHADERC_INCLUDE_DIR "${EXTERN_DIR}/shaderc/libshaderc/include")

# === stb_truetype ===
set(STB_DIR "${EXTERN_DIR}/stb")

# === libmspack ===
set(LIBMESSAGE_DIR "${EXTERN_DIR}/libmspack/libmspack")
set(LIBMESSAGE_INCLUDE_DIR "${LIBMESSAGE_DIR}/mspack")  # mspack/ contains system.h
list(APPEND PLATFORM_INCLUDE_DIRS ${LIBMESSAGE_INCLUDE_DIR})

# === msdf-atlas-gen ===
set(MSDFGEN_USE_VCPKG OFF CACHE BOOL "Disable vcpkg for msdfgen" FORCE)
set(MSDFGEN_USE_SKIA OFF CACHE BOOL "Disable Skia for msdfgen" FORCE)
set(MSDF_ATLAS_USE_VCPKG OFF CACHE BOOL "Disable vcpkg for msdfgen" FORCE)
set(MSDF_ATLAS_USE_SKIA OFF CACHE BOOL "Disable Skia for msdfgen" FORCE)

set(MSDF_ATLAS_GEN_DIR "${EXTERN_DIR}/msdf-atlas-gen")
set(MSDF_GEN_DIR "${EXTERN_DIR}/msdf-atlas-gen/msdfgen")
set(MSDF_GEN_CORE_DIR "${EXTERN_DIR}/msdf-atlas-gen/msdfgen/core")
set(MSDF_GEN_CORE_BASE_DIR "${EXTERN_DIR}/msdf-atlas-gen/msdfgen/core/base")
set(MSDF_ARTERY_FONT_DIR "${EXTERN_DIR}/msdf-atlas-gen/artery-font-format/artery-font")

add_subdirectory(${EXTERN_DIR}/msdf-atlas-gen)

# === tiny-AES-c ===
add_library(tiny_aes_c STATIC
    ${EXTERN_DIR}/tiny-AES-c/aes.c
)
target_include_directories(tiny_aes_c PUBLIC
    ${EXTERN_DIR}/tiny-AES-c
)
set_target_properties(tiny_aes_c PROPERTIES POSITION_INDEPENDENT_CODE ON)

# === Native File Dialog Extended ===
set(NFD_DIR "${EXTERN_DIR}/nativefiledialog-extended")
set(NFD_INCLUDE_DIR "${NFD_DIR}/src/include")

# Force static build only
set(NFD_BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)
set(NFD_BUILD_STATIC_LIBS ON CACHE BOOL "" FORCE)
set(NFD_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(NFD_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(${NFD_DIR} EXCLUDE_FROM_ALL)

# === o1heap ===
add_library(o1heap STATIC ${EXTERN_DIR}/o1heap/o1heap.c)
target_include_directories(o1heap PUBLIC ${EXTERN_DIR}/o1heap)
set_target_properties(o1heap PROPERTIES POSITION_INDEPENDENT_CODE ON)

# === xxhash ===
add_library(xxhash STATIC ${EXTERN_DIR}/xxHash/xxhash.c)
target_include_directories(xxhash PUBLIC ${EXTERN_DIR}/xxHash)
set_target_properties(xxhash PROPERTIES POSITION_INDEPENDENT_CODE ON)

# === ddspp ===
set(DDSPP_DIR "${EXTERN_DIR}/ddspp")
set(DDSPP_INCLUDE_DIR "${DDSPP_DIR}")
list(APPEND PLATFORM_INCLUDE_DIRS ${DDSPP_INCLUDE_DIR})

# Force static builds globally before adding subdirs
set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)

# === SDL3 ===
set(SDL3_DIR "${EXTERN_DIR}/SDL3")

# Disable shared lib (prevents symlink errors on NTFS/exFAT)
set(SDL_SHARED OFF CACHE BOOL "" FORCE)
set(SDL_STATIC ON CACHE BOOL "" FORCE)
set(SDL_TEST OFF CACHE BOOL "" FORCE)
set(SDL_INSTALL_TESTS OFF CACHE BOOL "" FORCE)
set(SDL_INSTALL OFF CACHE BOOL "" FORCE)
# Force static backend drivers to avoid runtime dlopen()
set(SDL_VIDEO_DRIVER_X11_DYNAMIC OFF CACHE BOOL "" FORCE)
set(SDL_AUDIO_DRIVER_PULSEAUDIO_DYNAMIC OFF CACHE BOOL "" FORCE)
set(SDL_AUDIO_DRIVER_ALSA_DYNAMIC OFF CACHE BOOL "" FORCE)
set(SDL_HIDAPI_LIBUSB_DYNAMIC OFF CACHE BOOL "" FORCE)

add_subdirectory(${SDL3_DIR} EXCLUDE_FROM_ALL)

# Manually define alias SDL3::SDL3 to satisfy SDL_mixer's find_package(SDL3)
set(SDL3_FOUND TRUE)

set(SDL3_INCLUDE_DIR "${SDL3_DIR}/include")

# === SDL_mixer ===
set(SDL_MIXER_DIR "${EXTERN_DIR}/SDL_mixer")
set(SDL3_MIXER_INCLUDE_DIR "${SDL_MIXER_DIR}/include")
set(SDL3_MIXER_PUBLIC_INCLUDE_DIR "${SDL_MIXER_DIR}/include/SDL3_mixer")
list(APPEND PLATFORM_INCLUDE_DIRS ${SDL3_INCLUDE_DIR} ${SDL3_MIXER_INCLUDE_DIR} ${SDL3_MIXER_PUBLIC_INCLUDE_DIR})

# Required to use SDL3-style include path layout
set(SDL3MIXER_SDL3 ON CACHE BOOL "" FORCE)

# Force static linking
set(SDL_MIXER_STATIC ON CACHE BOOL "" FORCE)
set(SDL_MIXER_SHARED OFF CACHE BOOL "" FORCE)
set(SDL3MIXER_BUILD_STATIC_LIBS ON CACHE BOOL "" FORCE)
set(SDL3MIXER_BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)

# Enable Vorbis via libvorbisfile
set(SDL_MIXER_VORBIS ON CACHE BOOL "" FORCE)
set(SDL_MIXER_VORBIS_LIBRARY_TYPE "VORBISFILE" CACHE STRING "" FORCE)

# Optional codecs OFF unless needed
set(SDL_MIXER_VENDORED ON CACHE BOOL "" FORCE)
set(SDL_MIXER_FLAC     OFF CACHE BOOL "" FORCE)
set(SDL_MIXER_MOD      OFF CACHE BOOL "" FORCE)
set(SDL_MIXER_MP3      OFF CACHE BOOL "" FORCE)
set(SDL_MIXER_OPUS     OFF CACHE BOOL "" FORCE)
set(SDL_MIXER_MIDI     OFF CACHE BOOL "" FORCE)
set(SDL_MIXER_SAMPLES  OFF CACHE BOOL "" FORCE)  # Optional
set(SDL_MIXER_INSTALL  OFF CACHE BOOL "" FORCE)

set(SDL3MIXER_DEPS_REQUIRED ON CACHE BOOL "" FORCE)
add_subdirectory(${SDL_MIXER_DIR} EXCLUDE_FROM_ALL)

# === fmtlib ===
add_library(fmtlib_static STATIC
    ${EXTERN_DIR}/fmt/src/format.cc
    ${EXTERN_DIR}/fmt/src/os.cc
)
set(FMT_INCLUDE_DIR "${EXTERN_DIR}/fmt/include")
target_include_directories(fmtlib_static PUBLIC ${FMT_INCLUDE_DIR})
set_target_properties(fmtlib_static PROPERTIES POSITION_INDEPENDENT_CODE ON)

# === tinyxml2 ===
set(TINYXML2_INCLUDE_DIR "${EXTERN_DIR}/tinyxml2")
set(TINYXML2_SOURCES
    ${EXTERN_DIR}/tinyxml2/tinyxml2.cpp
)

# === ImGui ===
set(IMGUI_INCLUDE_DIR "${EXTERN_DIR}/imgui")
set(IMGUI_SOURCES
    ${EXTERN_DIR}/imgui/imgui.cpp
    ${EXTERN_DIR}/imgui/imgui_draw.cpp
    ${EXTERN_DIR}/imgui/imgui_widgets.cpp
    ${EXTERN_DIR}/imgui/imgui_tables.cpp
    ${EXTERN_DIR}/imgui/imgui_demo.cpp
)

# === ImPlot ===
set(IMPLOT_INCLUDE_DIR "${EXTERN_DIR}/implot")
set(IMPLOT_SOURCES
    ${EXTERN_DIR}/implot/implot.cpp
    ${EXTERN_DIR}/implot/implot_items.cpp
    ${EXTERN_DIR}/implot/implot_demo.cpp
)

add_library(imgui STATIC ${IMGUI_SOURCES})
target_include_directories(imgui PUBLIC ${EXTERN_DIR}/imgui)

# === D3D12 Memory Allocator ===
set(D3D12MA_INCLUDE_DIR "${EXTERN_DIR}/D3D12MA/include")
set(D3D12MA_SOURCES "${EXTERN_DIR}/D3D12MA/src/D3D12MemAlloc.cpp")

# === Volk ===
set(VOLK_DIR "${EXTERN_DIR}/volk")
set(VOLK_INCLUDE_DIR "${VOLK_DIR}")
set(VOLK_SOURCES "${VOLK_DIR}/volk.c")
add_library(volk STATIC ${VOLK_SOURCES})
target_include_directories(volk PUBLIC ${VOLK_INCLUDE_DIR})
target_compile_definitions(volk PUBLIC VK_NO_PROTOTYPES)
set_target_properties(volk PROPERTIES POSITION_INDEPENDENT_CODE ON)

# === Platform-specific setup ===
if(WIN32)
    # Windows + vcpkg setup
    if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
        set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
    endif()

    find_package(toml11 CONFIG REQUIRED)
    find_package(spdlog CONFIG REQUIRED)
    find_package(imgui CONFIG REQUIRED)
    find_package(implot CONFIG REQUIRED)
    find_package(glm CONFIG REQUIRED)
    find_package(tinyxml2 CONFIG REQUIRED)
    list(APPEND PLATFORM_INCLUDE_DIRS ${D3D12MA_INCLUDE_DIR})
    list(APPEND SOURCES ${D3D12MA_SOURCES})

    set(PLATFORM_LIBS
        toml11::toml11
        spdlog::spdlog
        imgui::imgui
        implot::implot
        glm::glm
        tinyxml2::tinyxml2
    )
else()
    # Linux/macOS: use bundled sources
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(TINYXML2 REQUIRED tinyxml2)

    set(PLATFORM_INCLUDE_DIRS
        ${SDL3_INCLUDE_DIR}
        ${TINYXML2_INCLUDE_DIRS}
        ${GLM_INCLUDE_DIR}
        ${SPDLOG_INCLUDE_DIR}
        ${IMGUI_INCLUDE_DIR}
        ${IMPLOT_INCLUDE_DIR}
        ${FMT_INCLUDE_DIR}
        ${SIMDE_INCLUDE_DIR}
        ${VMA_INCLUDE_DIR}
        ${VOLK_INCLUDE_DIR}
        ${NFD_INCLUDE_DIR}
    )

    list(APPEND SOURCES
        ${TINYXML2_SOURCES}
        ${IMGUI_SOURCES}
        ${IMPLOT_SOURCES}
        ${FMT_SOURCES}
        ${VOLK_SOURCES}
    )

    set(PLATFORM_LIBS
        ${TINYXML2_LIBRARIES}
    )

    if(NOT WIN32)
        message(STATUS "Note: All core libraries are bundled. System Vulkan loader is still required at runtime.")
        message(STATUS "To install Vulkan loader:")
        message(STATUS "  - Arch: sudo pacman -S vulkan-icd-loader")
        message(STATUS "  - Debian/Ubuntu: sudo apt install libvulkan1")
    endif()
endif()

if(NOT WIN32)
    find_package(X11 REQUIRED)
    list(APPEND PLATFORM_INCLUDE_DIRS ${X11_INCLUDE_DIR})
    list(APPEND PLATFORM_LIBS ${X11_LIBRARIES})
endif()

# === Add source directory ===
add_subdirectory(src)

# === Define executable ===
add_executable(Fable2Recomp ${FABLE2_SOURCES} ${FABLE2_HEADERS})

# === Include directories ===
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${PLATFORM_INCLUDE_DIRS}
    ${O1HEAP_INCLUDE_DIR}
    ${DDSPP_DIR}
    ${SDL3_INCLUDE_DIR}
    ${SDL3_MIXER_INCLUDE_DIR}
    ${SDL3_MIXER_PUBLIC_INCLUDE_DIR}
    ${TOML_INCLUDE_DIR}
    ${ANKERL_UNORDERED_DENSE_INCLUDE_DIR}
    ${XXHASH_INCLUDE_DIR}
    ${FMT_INCLUDE_DIR}
    ${LIBMESSAGE_INCLUDE_DIR}
    ${TINYSHA1_INCLUDE_DIR}
    ${MSDF_ATLAS_GEN_DIR}
    ${MSDF_GEN_DIR}
    ${MSDF_GEN_CORE_DIR}
    ${MSDF_GEN_CORE_BASE_DIR}
    ${MSDF_ARTERY_FONT_DIR}
    ${STB_DIR}
    ${CMAKE_BINARY_DIR}/generated
    ${SHADERC_INCLUDE_DIR}
    ${VOLK_INCLUDE_DIR}
)

# === Link libraries ===
target_link_libraries(${PROJECT_NAME} PRIVATE
    SDL3::SDL3-static
    SDL3_mixer::SDL3_mixer
    fmtlib_static
    o1heap
    xxhash
    nfd
    tiny_aes_c
    disasm
    imgui
    msdf-atlas-gen
    msdfgen-core
    volk
    ${PLATFORM_LIBS}
    shaderc_combined
    # Linux-specific static SDL deps
    m
    pthread
    dl
    rt
    X11
    Xext
    Xcursor
    Xrender
    Xi
    xkbcommon
)

# === SIMD configuration (SIMDe) ===
# Enable SIMDe native aliases (allows _mm_* to resolve when supported)
add_definitions(
  -DSIMDE_NO_NATIVE=1
  -DSDL_DISABLE_IMMINTRIN_H
)

# Detect platform + compiler support for native intrinsics
include(CheckCXXCompilerFlag)

check_cxx_compiler_flag("-msse4.1" COMPILER_SUPPORTS_SSE41)

if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64" AND COMPILER_SUPPORTS_SSE41)
    message(STATUS "SIMDe: Enabling native SSE4.1 support (-msse4.1)")
    add_compile_options(-msse4.1)
elseif(CMAKE_SYSTEM_PROCESSOR MATCHES "aarch64")
    message(STATUS "SIMDe: ARM64 target detected — enabling NEON flags")
    add_definitions(-DSIMDE_ARM_NEON_A32=1)
    add_compile_options(-mfpu=neon)
else()
    message(STATUS "SIMDe: Using portable-only SIMD mode (no native flags)")
endif()

# Cross-compiling fallback: disable native SIMD entirely
if(CMAKE_CROSSCOMPILING)
    message(STATUS "SIMDe: Cross-compiling — forcing portable-only fallback")
    add_definitions(-DSIMDE_NO_NATIVE=1)
endif()
if(CMAKE_CROSSCOMPILING)
    message(STATUS "Cross-compiling: Defining SDL_DISABLE_IMMINTRIN_H to prevent <immintrin.h> issues.")
    add_definitions(-DSDL_DISABLE_IMMINTRIN_H)
endif()

# === Status messages ===
message(STATUS "Using SDL3 (static) from: ${SDL3_INCLUDE_DIR}")
message(STATUS "Using SDL_mixer (static) from: ${SDL3_INCLUDE_DIR}")
message(STATUS "Using Vulkan-Headers from: ${VULKAN_HEADERS_DIR}")
message(STATUS "Using VulkanMemoryAllocator from: ${VMA_INCLUDE_DIR}")
message(STATUS "Using Volk from: ${VOLK_DIR}")
message(STATUS "Using D3D12MemoryAllocator from: ${D3D12MA_INCLUDE_DIR} -Windows Only-")
message(STATUS "Using ddspp from: ${DDSPP_DIR}")
message(STATUS "Using ImGui from: ${IMGUI_INCLUDE_DIR}")
message(STATUS "Using ImPlot from: ${IMPLOT_INCLUDE_DIR}")
message(STATUS "Using GLM from: ${GLM_INCLUDE_DIR}")
message(STATUS "Using spdlog from: ${SPDLOG_INCLUDE_DIR}")
message(STATUS "Using toml++ from: ${TOML_INCLUDE_DIR}")
message(STATUS "Using tinyxml2 from: ${TINYXML2_INCLUDE_DIR}")
message(STATUS "Using fmtlib from: ${FMT_INCLUDE_DIR}")
message(STATUS "Using SIMDe from: ${SIMDE_INCLUDE_DIR}")
message(STATUS "Using ankerl::unordered_dense from: ${ANKERL_UNORDERED_DENSE_INCLUDE_DIR}")
message(STATUS "Using nativefiledialog-extended from: ${NFD_DIR}")

