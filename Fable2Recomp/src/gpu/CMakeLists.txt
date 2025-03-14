cmake_minimum_required(VERSION 3.15)

# Enable Vulkan Validation Layers (Debug Mode Only)
if(CMAKE_BUILD_TYPE MATCHES Debug)
    find_package(Vulkan REQUIRED COMPONENTS DebugUtils)
    if(Vulkan_FOUND)
        set(VULKAN_VALIDATION_LAYERS "VK_LAYER_KHRONOS_validation")
        message(STATUS "Vulkan validation layers enabled")
        message(STATUS "Vulkan SDK FOUND: ${Vulkan_DIR}")
        message(STATUS "Vulkan INCLUDE DIRS: ${Vulkan_INCLUDE_DIRS}")
        message(STATUS "Vulkan LIBRARIES: ${Vulkan_LIBRARIES}")
    else()
        message(WARNING "Vulkan validation layers requested but not found.")
        message(WARNING "Vulkan SDK NOT FOUND. Check VK_SDK_PATH and installation.")
    endif()
else()
    find_package(Vulkan REQUIRED)
    message(STATUS "Vulkan SDK FOUND in Release mode.")
endif()

# Source files
set(SOURCES
    gpu.cpp
    gpu.c
    video.cpp
    imgui/imgui_common.cpp
    imgui/imgui_snapshot.cpp
    rhi/plume_vulkan.cpp
    rhi/vulkan_interface.cpp
    rhi/vulkan_loader.cpp
    rhi/vulkan_render_device.cpp
)

# Header files
set(HEADERS
    gpu.h
    video.h
    imgui/imgui_common.h
    imgui/imgui_snapshot.h
    rhi/plume_vulkan.h
    rhi/plume_render_interface.h
    rhi/vulkan_common.h
    rhi/vulkan_interface.h
)

# Create library
add_library(gpu STATIC
    gpu.cpp
)

# Add include directories
target_include_directories(gpu
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/thirdparty/imgui
        ${CMAKE_SOURCE_DIR}/thirdparty/ImPlot
        ${Vulkan_INCLUDE_DIRS}
)

# Link dependencies
target_link_libraries(gpu
    PUBLIC
        imgui
        SDL3::SDL3
        ${Vulkan_LIBRARIES}
        ${SHADERC_LIBRARIES}
) 