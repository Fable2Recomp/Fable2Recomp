cmake_minimum_required(VERSION 3.10)
project(glslang)

set(GLSLANG_SKIP_TESTS ON CACHE BOOL "Skip building glslang tests")
set(GLSLANG_SKIP_EXECUTABLES ON CACHE BOOL "Skip building glslang executables")
set(GLSLANG_INSTALL OFF CACHE BOOL "Install glslang")
set(ENABLE_OPT OFF CACHE BOOL "Disable SPIRV-Tools optimizer")
set(BUILD_SHARED_LIBS OFF CACHE BOOL "Build shared libraries")
set(BUILD_EXTERNAL OFF CACHE BOOL "Build external dependencies")
set(BUILD_WERROR OFF CACHE BOOL "Enable warnings as errors")

# Set build directory for glslang
set(GLSLANG_BUILD_DIR ${CMAKE_CURRENT_BINARY_DIR}/glslang-build)

# Add glslang to the build
add_subdirectory(glslang ${GLSLANG_BUILD_DIR}) 