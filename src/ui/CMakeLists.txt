add_library(ui STATIC
    ui.cpp
)

target_include_directories(ui
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/thirdparty
)

target_link_libraries(ui
    PRIVATE
    gpu
    imgui
    SDL3::SDL3
) 