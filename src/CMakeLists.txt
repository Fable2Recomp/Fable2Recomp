cmake_minimum_required(VERSION 3.15)

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
find_package(unofficial-shaderc CONFIG REQUIRED)
find_package(imgui CONFIG REQUIRED)
find_package(implot CONFIG REQUIRED)

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

# Set include directories
target_include_directories(fable2 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link libraries
target_link_libraries(fable2 PRIVATE
    SDL3::SDL3
    Vulkan::Vulkan
    glm::glm
    tinyxml2::tinyxml2
    fmt::fmt
    imgui::imgui
    implot::implot
    unofficial::shaderc::shaderc
)

# Add source subdirectories
add_subdirectory(api)
add_subdirectory(apu)
add_subdirectory(assets)
add_subdirectory(backends)
add_subdirectory(base)
add_subdirectory(cpu)
add_subdirectory(gpu)
add_subdirectory(hid)
add_subdirectory(kernel)
add_subdirectory(os)
add_subdirectory(patches)
add_subdirectory(ppc)
add_subdirectory(rhi)
add_subdirectory(ui)
add_subdirectory(vfs)
add_subdirectory(xenia)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()

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