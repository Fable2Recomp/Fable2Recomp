cmake_minimum_required(VERSION 3.10)
project(shaderc)

set(SHADERC_SKIP_TESTS ON CACHE BOOL "Skip building shaderc tests")
set(SHADERC_SKIP_EXECUTABLES ON CACHE BOOL "Skip building shaderc executables")
set(SHADERC_INSTALL OFF CACHE BOOL "Install shaderc")

# Set glslang path
set(GLSLANG_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../glslang/glslang)
set(GLSLANG_BUILD_DIR ${CMAKE_CURRENT_BINARY_DIR}/glslang-build)

# Add glslang to the build
add_subdirectory(${GLSLANG_SOURCE_DIR} ${GLSLANG_BUILD_DIR})

add_subdirectory(shaderc) 