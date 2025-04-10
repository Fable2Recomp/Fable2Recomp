cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Platform-specific setup
if(WIN32)
    # Set vcpkg toolchain file if not already set (Windows)
    if(DEFINED ENV{VCPKG_ROOT} AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
        set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake"
            CACHE STRING "")
    endif()
    
    # Find required packages using vcpkg on Windows
    find_package(toml11 CONFIG REQUIRED)
    find_package(spdlog CONFIG REQUIRED)
    find_package(imgui CONFIG REQUIRED)
    find_package(implot CONFIG REQUIRED)
    find_package(glm CONFIG REQUIRED)
    find_package(tinyxml2 CONFIG REQUIRED)
    
    set(PLATFORM_LIBS
        toml11::toml11
        spdlog::spdlog
        imgui::imgui
        implot::implot
        glm::glm
        tinyxml2::tinyxml2
    )
else()
    # Linux: Use system packages
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(SPDLOG REQUIRED spdlog)
    pkg_check_modules(TINYXML2 REQUIRED tinyxml2)
    
    # GLM is header-only, just need to find the include directory
    find_path(GLM_INCLUDE_DIR glm/glm.hpp
        PATHS
        /usr/include
        /usr/local/include
    )
    
    if(NOT GLM_INCLUDE_DIR)
        message(FATAL_ERROR "GLM headers not found!")
    endif()

# Ensure the correct include directory for ImGui
set(IMGUI_INCLUDE_DIR "/home/loreaxe/Desktop/Ryan/Xbox 360 Games/Fable 2/Other/imgui")

# Check if the directory exists and contains imgui.h
if(NOT EXISTS ${IMGUI_INCLUDE_DIR}/imgui.h)
    message(FATAL_ERROR "ImGui header not found in ${IMGUI_INCLUDE_DIR}. Please check the path.")
endif()

# Ensure the correct include directory for Implot
set(IMPLOT_INCLUDE_DIR "/home/loreaxe/Desktop/Ryan/Xbox 360 Games/Fable 2/Other/implot")

# Check if the directory exists and contains implot.h
if(NOT EXISTS ${IMPLOT_INCLUDE_DIR}/implot.h)
    message(FATAL_ERROR "ImPlot header not found in ${IMPLOT_INCLUDE_DIR}. Please check the path.")
endif()

# Add Implot include directory
include_directories(${IMPLOT_INCLUDE_DIR})
include_directories("/path/to/toml11/include")

    # Note: Some packages might need manual include path setup
    set(PLATFORM_LIBS
        ${SPDLOG_LIBRARIES}
        ${TINYXML2_LIBRARIES}
        ${IMGUI_LIBRARY}
        ${IMPLOT_LIBRARY}
    )
    
    set(PLATFORM_INCLUDE_DIRS
        ${SPDLOG_INCLUDE_DIRS}
        ${TINYXML2_INCLUDE_DIRS}
        ${GLM_INCLUDE_DIR}
        ${IMGUI_INCLUDE_DIR}
        ${IMPLOT_INCLUDE_DIR}
    )
    
    message(STATUS "On Linux, please install required packages:")
    message(STATUS "sudo pacman -S spdlog glm tinyxml2 toml11")
    message(STATUS "yay -S imgui")
    message(STATUS "For implot, build from source: git clone https://github.com/epezent/implot.git")
    message(STATUS "Or for Ubuntu/Debian:")
    message(STATUS "sudo apt install libspdlog-dev libglm-dev libtinyxml2-dev")
endif()

# Add source files
set(SOURCES
    src/main.cpp
    src/cpu/ppc_recomp.cpp
    src/cpu/ppc_integration.cpp
    src/os/logger.cpp
)

# Add header files
set(HEADERS
    src/cpu/ppc_recomp.h
    src/cpu/ppc_integration.h
    src/os/logger.h
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${PLATFORM_LIBS}
    ${IMGUI_LIBRARY}
    ${IMPLOT_LIBRARY}
)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/src
    ${PLATFORM_INCLUDE_DIRS}
    ${IMGUI_INCLUDE_DIR}
    ${IMPLOT_INCLUDE_DIR}
)

