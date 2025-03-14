cmake_minimum_required(VERSION 3.15)
project(Fable2Recomp VERSION 0.1.0 LANGUAGES C CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Build options
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)
option(BUILD_TESTING "Build tests" ON)

# Enable testing
include(CTest)
enable_testing()

# Find required packages
find_package(SDL3 REQUIRED)
find_package(Vulkan REQUIRED)
find_package(glm REQUIRED)
find_package(tinyxml2 REQUIRED)
find_package(fmt REQUIRED)
find_package(GTest REQUIRED)

# Find shaderc using pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(SHADERC REQUIRED shaderc)

# Add subdirectories for third-party libraries
add_subdirectory(thirdparty/imgui)
add_subdirectory(thirdparty/ImPlot)

# Add source subdirectories
add_subdirectory(src)
add_subdirectory(src/api)
add_subdirectory(src/base)
add_subdirectory(src/gpu)
add_subdirectory(src/vfs)
add_subdirectory(src/assets)
add_subdirectory(src/apu)
add_subdirectory(src/hid)
add_subdirectory(src/ui)
add_subdirectory(src/kernel)
add_subdirectory(src/patches)
add_subdirectory(src/os)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Install rules
install(TARGETS fable2
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)