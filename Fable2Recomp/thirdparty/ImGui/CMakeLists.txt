cmake_minimum_required(VERSION 3.10)
project(ImGui)

set(IMGUI_BUILD_EXAMPLES OFF CACHE BOOL "Build ImGui examples")
set(IMGUI_BUILD_TESTS OFF CACHE BOOL "Build ImGui tests")
set(IMGUI_INSTALL OFF CACHE BOOL "Install ImGui")

add_subdirectory(imgui) 