cmake_minimum_required(VERSION 3.15)

# Source files
set(SOURCES
    main.cpp
)

# Create executable
add_executable(fable2 ${SOURCES})

# Add include directories
target_include_directories(fable2
    PRIVATE
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/thirdparty/imgui
        ${CMAKE_SOURCE_DIR}/thirdparty/ImPlot
)

# Link dependencies
target_link_libraries(fable2
    PRIVATE
        # Internal libraries
        api
        gpu
        vfs
        assets
        apu
        hid
        ui
        kernel
        patches
        os
        base

        # Third-party libraries
        imgui
        implot
        SDL3::SDL3
        glm::glm
        tinyxml2::tinyxml2
        fmt::fmt
        ${SHADERC_LIBRARIES}
        ${Vulkan_LIBRARIES}
) 