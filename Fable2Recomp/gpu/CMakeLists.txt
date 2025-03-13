cmake_minimum_required(VERSION 3.10)

# Add GPU library
add_library(gpu STATIC
    gpu.cpp
    gpu.h
    video.cpp
    video.h
    shader/shader_bank.cpp
)

target_include_directories(gpu
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/thirdparty
)

target_link_libraries(gpu
    PUBLIC
    imgui
) 