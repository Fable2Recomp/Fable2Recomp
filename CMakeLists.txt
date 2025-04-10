cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# === Paths ===
set(EXTERN_DIR "${CMAKE_SOURCE_DIR}/extern")

# === Header-only includes ===
set(SPDLOG_INCLUDE_DIR "${EXTERN_DIR}/spdlog/include")
set(GLM_INCLUDE_DIR    "${EXTERN_DIR}/glm")
set(TOML11_INCLUDE_DIR "${EXTERN_DIR}/toml11/include")
set(SIMDE_INCLUDE_DIR  "${EXTERN_DIR}/simde")

# === fmtlib ===
set(FMT_INCLUDE_DIR "${EXTERN_DIR}/fmt/include")
set(FMT_SOURCES
    ${EXTERN_DIR}/fmt/src/format.cc
    ${EXTERN_DIR}/fmt/src/os.cc
)

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

    find_path(GLM_INCLUDE_DIR glm/glm.hpp PATHS /usr/include /usr/local/include)
    if(NOT GLM_INCLUDE_DIR)
        message(FATAL_ERROR "GLM headers not found!")
    endif()

    set(PLATFORM_INCLUDE_DIRS
        ${TINYXML2_INCLUDE_DIRS}
        ${GLM_INCLUDE_DIR}
        ${SPDLOG_INCLUDE_DIR}
        ${IMGUI_INCLUDE_DIR}
        ${IMPLOT_INCLUDE_DIR}
        ${TOML11_INCLUDE_DIR}
        ${FMT_INCLUDE_DIR}
        ${SIMDE_INCLUDE_DIR}
    )

    list(APPEND SOURCES
        ${TINYXML2_SOURCES}
        ${IMGUI_SOURCES}
        ${IMPLOT_SOURCES}
        ${FMT_SOURCES}
    )

    set(PLATFORM_LIBS
        ${TINYXML2_LIBRARIES}
    )

    message(STATUS "On Linux, please install required packages:")
    message(STATUS "sudo pacman -S glm tinyxml2 toml11")
    message(STATUS "yay -S imgui")
    message(STATUS "For implot, use extern/ or build from source")
    message(STATUS "Ubuntu/Debian: sudo apt install libglm-dev libtinyxml2-dev")
endif()

# === Project source files ===
set(SOURCES
    ${SOURCES}
    src/main.cpp
    src/cpu/ppc_recomp.cpp
    src/cpu/ppc_integration.cpp
    src/os/logger.cpp
)

# === Project header files ===
set(HEADERS
    src/cpu/ppc_recomp.h
    src/cpu/ppc_integration.h
    src/os/logger.h
)

# === Create executable ===
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# === Include directories ===
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${PLATFORM_INCLUDE_DIRS}
)

# === Link libraries ===
target_link_libraries(${PROJECT_NAME} PRIVATE
    ${PLATFORM_LIBS}
)

# === SIMD configuration ===
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64")
    message(STATUS "Target is x86_64: enabling native SIMD for SIMDe")

    target_compile_definitions(${PROJECT_NAME} PRIVATE
        SIMDE_ENABLE_NATIVE_ALIASES
        SIMDE_SSE4_1_NATIVE
    )

    if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
        target_compile_options(${PROJECT_NAME} PRIVATE -msse4.1)
    endif()
else()
    message(STATUS "Target is non-x86_64 (e.g., ARM): using SIMDe emulation")

    target_compile_definitions(${PROJECT_NAME} PRIVATE
        SIMDE_ENABLE_NATIVE_ALIASES
        SIMDE_NO_NATIVE
    )
endif()

# === Status messages ===
message(STATUS "Using ImGui from: ${IMGUI_INCLUDE_DIR}")
message(STATUS "Using ImPlot from: ${IMPLOT_INCLUDE_DIR}")
message(STATUS "Using GLM from: ${GLM_INCLUDE_DIR}")
message(STATUS "Using spdlog from: ${SPDLOG_INCLUDE_DIR}")
message(STATUS "Using toml11 from: ${TOML11_INCLUDE_DIR}")
message(STATUS "Using tinyxml2 from: ${TINYXML2_INCLUDE_DIR}")
message(STATUS "Using fmtlib from: ${FMT_INCLUDE_DIR}")
message(STATUS "Using SIMDe from: ${SIMDE_INCLUDE_DIR}")

