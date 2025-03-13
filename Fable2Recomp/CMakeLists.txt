cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add third-party dependencies in the correct order
add_subdirectory(thirdparty/SDL)
add_subdirectory(thirdparty/Vulkan-Headers)
add_subdirectory(thirdparty/SPIRV-Headers)
# glslang is handled by shaderc
add_subdirectory(thirdparty/SPIRV-Tools)
add_subdirectory(thirdparty/shaderc)
add_subdirectory(thirdparty/Vulkan-MemoryAllocator)
add_subdirectory(thirdparty/ImGui)
add_subdirectory(thirdparty/ImPlot)
add_subdirectory(thirdparty/GLFW)

# Add include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/thirdparty
    ${CMAKE_SOURCE_DIR}/thirdparty/vma
    ${CMAKE_SOURCE_DIR}/thirdparty/ImGui/imgui
    ${CMAKE_SOURCE_DIR}/thirdparty/ImPlot
    ${CMAKE_SOURCE_DIR}/ppc/UnleashedRecomp
    ${Vulkan_INCLUDE_DIRS}
    ${FMT_INCLUDE_DIRS}
)

# Add subdirectories
add_subdirectory(ppc/UnleashedRecomp/os)
add_subdirectory(gpu)
add_subdirectory(vfs)
add_subdirectory(assets)
add_subdirectory(test)
add_subdirectory(apu)
add_subdirectory(hid)
add_subdirectory(ui)
add_subdirectory(kernel)
add_subdirectory(patches)

# Add data loader module
add_library(data_loader
    src/data_loader.cpp
)

target_include_directories(data_loader
    PUBLIC
        ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(data_loader
    PRIVATE
        os
)

# Add source directories
add_subdirectory(src)

# Find required packages
find_package(ZLIB REQUIRED)
find_package(PkgConfig REQUIRED)
find_package(OpenGL REQUIRED)
find_package(Vulkan REQUIRED)
pkg_check_modules(TINYXML2 REQUIRED tinyxml2)
pkg_check_modules(FMT REQUIRED fmt)

# Add main executable
add_executable(fable2 main.cpp)

# Link libraries
target_link_libraries(fable2
    PRIVATE
    gpu
    vfs
    assets
    apu
    hid
    ui
    kernel
    patches
    imgui
    implot
    os
    ${ZLIB_LIBRARIES}
    ${TINYXML2_LIBRARIES}
    ${OPENGL_LIBRARIES}
    ${Vulkan_LIBRARIES}
    SDL3::SDL3
    ${FMT_LIBRARIES}
    data_loader
)