cmake_minimum_required(VERSION 3.10)

# Enable Vulkan Validation Layers (Debug Mode Only)
if(CMAKE_BUILD_TYPE MATCHES Debug)
    find_package(Vulkan COMPONENTS DebugUtils)
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

# Create GPU library
add_library(gpu STATIC
    gpu.cpp
    gpu.hpp
)

# Include directories
target_include_directories(gpu PUBLIC
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/thirdparty/ImGui
    ${CMAKE_SOURCE_DIR}/src/thirdparty/ImGui/backends
    ${CMAKE_SOURCE_DIR}/src/thirdparty
)

# Link dependencies
target_link_libraries(gpu PUBLIC
    Vulkan::Vulkan
    imgui
)

target_compile_features(gpu PUBLIC cxx_std_20) 