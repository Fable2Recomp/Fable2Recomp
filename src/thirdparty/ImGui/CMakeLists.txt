add_library(imgui STATIC
    imgui.cpp
    imgui_draw.cpp
    imgui_tables.cpp
    imgui_widgets.cpp
    imgui_demo.cpp
    implot.cpp
    backends/imgui_impl_sdl3.cpp
    backends/imgui_impl_vulkan.cpp
)

target_include_directories(imgui
    PUBLIC
    ${CMAKE_SOURCE_DIR}/src/thirdparty
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/backends
)

# Find SDL3 and Vulkan
find_package(SDL3 REQUIRED)
find_package(Vulkan REQUIRED)

target_link_libraries(imgui
    PUBLIC
    SDL3::SDL3
    Vulkan::Vulkan
) 