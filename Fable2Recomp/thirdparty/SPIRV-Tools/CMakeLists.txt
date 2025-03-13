cmake_minimum_required(VERSION 3.10)
project(SPIRV-Tools)

set(SPIRV_SKIP_TESTS ON CACHE BOOL "Skip building SPIRV-Tools tests")
set(SPIRV_SKIP_EXECUTABLES ON CACHE BOOL "Skip building SPIRV-Tools executables")
set(SPIRV_INSTALL OFF CACHE BOOL "Install SPIRV-Tools")

add_subdirectory(SPIRV-Tools) 