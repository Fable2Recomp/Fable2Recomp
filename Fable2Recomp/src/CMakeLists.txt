cmake_minimum_required(VERSION 3.10)

# Add source files
set(SOURCES
    main.cpp
)

# Create executable
add_executable(Fable2Recomp ${SOURCES})

# Add include directories
target_include_directories(Fable2Recomp
    PRIVATE
        ${CMAKE_SOURCE_DIR}
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/thirdparty/ImGui/imgui
        ${CMAKE_SOURCE_DIR}/thirdparty/ImPlot
)

# Link dependencies
target_link_libraries(Fable2Recomp
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