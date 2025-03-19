add_library(imgui STATIC
    imgui.cpp
    imgui_internal.h
    implot.cpp
    backends/imgui_impl_sdl2.cpp
    backends/imgui_impl_opengl3.cpp
)

target_include_directories(imgui
    PUBLIC
    ${CMAKE_SOURCE_DIR}/thirdparty
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Find SDL2 and OpenGL
find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)

target_link_libraries(imgui
    PUBLIC
    SDL2::SDL2
    OpenGL::GL
) 