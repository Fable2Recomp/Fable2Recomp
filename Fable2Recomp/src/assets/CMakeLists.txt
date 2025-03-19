cmake_minimum_required(VERSION 3.10)

# Create assets library
add_library(assets STATIC
    src/assets.cpp
    src/assets_model.cpp
    src/assets_script.cpp
    src/assets_shader.cpp
    src/assets_texture.cpp
)

# Include directories
target_include_directories(assets PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}
)

# Link dependencies
target_link_libraries(assets PUBLIC
    gpu
    vfs
) 