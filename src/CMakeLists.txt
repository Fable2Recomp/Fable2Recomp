cmake_minimum_required(VERSION 3.15)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add compiler-specific options
if(MSVC)
    add_compile_options(/utf-8)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

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
find_package(PkgConfig REQUIRED)
pkg_check_modules(SHADERC REQUIRED shaderc)

# Add source files
set(FABLE2_SOURCES
    main.cpp
    data_loader.cpp
    logger.cpp
    stdafx.cpp
)

set(FABLE2_HEADERS
    data_loader.h
    logger.h
    stdafx.h
)

# Create main executable
add_executable(fable2 ${FABLE2_SOURCES} ${FABLE2_HEADERS})

# Set include directories for all targets
include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/src/include
    ${SDL3_INCLUDE_DIRS}
    ${Vulkan_INCLUDE_DIRS}
    ${GLM_INCLUDE_DIRS}
    ${TINYXML2_INCLUDE_DIRS}
    ${FMT_INCLUDE_DIRS}
    ${GTEST_INCLUDE_DIRS}
    ${SHADERC_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/src/thirdparty/ImGui
    ${CMAKE_BINARY_DIR}/vcpkg_installed/x64-windows/include
)

# Link libraries
target_link_libraries(fable2 PRIVATE
    ui
    SDL3::SDL3
    Vulkan::Vulkan
    glm::glm
    tinyxml2::tinyxml2
    fmt::fmt
    GTest::gtest
    GTest::gtest_main
    ${SHADERC_LIBRARIES}
    imgui
)

# Add subdirectories
add_subdirectory(ui)
add_subdirectory(ppc)
add_subdirectory(ppc_recomp)
add_subdirectory(assets)
add_subdirectory(xenia)
add_subdirectory(rhi)
add_subdirectory(cpu)
add_subdirectory(backends)
add_subdirectory(vfs)
add_subdirectory(thirdparty)
add_subdirectory(tests)
add_subdirectory(test)
add_subdirectory(base)
add_subdirectory(patches)
add_subdirectory(os)
add_subdirectory(kernel)
add_subdirectory(hid)
add_subdirectory(gpu)
add_subdirectory(api)
add_subdirectory(apu)

# Add Windows-specific settings
if(WIN32)
    include(${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.windows.txt)
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