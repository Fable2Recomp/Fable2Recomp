cmake_minimum_required(VERSION 3.10)

# Create assets library
add_library(assets STATIC
    assets.cpp
    assets_model.cpp
    assets_script.cpp
    assets_shader.cpp
    assets_texture.cpp
)

# Include directories
target_include_directories(assets PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}
)

# Link dependencies
target_link_libraries(assets PUBLIC
    gpu
    vfs
) 