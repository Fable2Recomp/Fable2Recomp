cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/thirdparty
)

# Add subdirectories
add_subdirectory(thirdparty/imgui)
add_subdirectory(gpu)
add_subdirectory(vfs)
add_subdirectory(assets)
add_subdirectory(test)
add_subdirectory(apu)
add_subdirectory(hid)
add_subdirectory(ui)
add_subdirectory(kernel)
add_subdirectory(patches)

# Find required packages
find_package(ZLIB REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(TINYXML2 REQUIRED tinyxml2)

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
    ${ZLIB_LIBRARIES}
    ${TINYXML2_LIBRARIES}
)