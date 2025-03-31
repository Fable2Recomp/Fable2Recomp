cmake_minimum_required(VERSION 3.10)
project(Vulkan-MemoryAllocator)

set(VMA_BUILD_SAMPLE OFF CACHE BOOL "Build VMA sample")
set(VMA_BUILD_TESTS OFF CACHE BOOL "Build VMA tests")
set(VMA_INSTALL OFF CACHE BOOL "Install VMA")

add_subdirectory(Vulkan-MemoryAllocator) 