cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# === Paths ===
set(EXTERN_DIR "${CMAKE_SOURCE_DIR}/extern")

# === Header-only libraries ===
set(SPDLOG_INCLUDE_DIR "${EXTERN_DIR}/spdlog/include")
set(GLM_INCLUDE_DIR    "${EXTERN_DIR}/glm")
set(TOML11_INCLUDE_DIR "${EXTERN_DIR}/toml11/include")

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

# === Project source files ===
set(SOURCES
    src/main.cpp
    src/cpu/ppc_recomp.cpp
    src/cpu/ppc_integration.cpp
    src/os/logger.cpp
    ${TINYXML2_SOURCES}
    ${IMGUI_SOURCES}
    ${IMPLOT_SOURCES}
    ${FMT_SOURCES}
)

# === Header files (for IDEs) ===
set(HEADERS
    src/cpu/ppc_recomp.h
    src/cpu/ppc_integration.h
    src/os/logger.h
)

# === Include directories ===
set(PLATFORM_INCLUDE_DIRS
    ${SPDLOG_INCLUDE_DIR}
    ${GLM_INCLUDE_DIR}
    ${TINYXML2_INCLUDE_DIR}
    ${IMGUI_INCLUDE_DIR}
    ${IMPLOT_INCLUDE_DIR}
    ${TOML11_INCLUDE_DIR}
    ${FMT_INCLUDE_DIR}
)

# === Libraries to link (none needed unless more system libs added) ===
set(PLATFORM_LIBS "")

# === Create executable ===
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# === Apply includes and link libraries ===
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${PLATFORM_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${PLATFORM_LIBS}
)

# === Status messages ===
message(STATUS "Using ImGui from: ${IMGUI_INCLUDE_DIR}")
message(STATUS "Using ImPlot from: ${IMPLOT_INCLUDE_DIR}")
message(STATUS "Using GLM from: ${GLM_INCLUDE_DIR}")
message(STATUS "Using spdlog from: ${SPDLOG_INCLUDE_DIR}")
message(STATUS "Using toml11 from: ${TOML11_INCLUDE_DIR}")
message(STATUS "Using tinyxml2 from: ${TINYXML2_INCLUDE_DIR}")
message(STATUS "Using fmtlib from: ${FMT_INCLUDE_DIR}")
