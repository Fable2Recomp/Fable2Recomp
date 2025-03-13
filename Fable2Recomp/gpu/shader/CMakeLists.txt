cmake_minimum_required(VERSION 3.10)

# Add shader bank library
add_library(shader_bank
    shader_bank.cpp
    shader_bank.hpp
)

target_include_directories(shader_bank PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add test program
add_executable(test_shader_bank
    test_shader_bank.cpp
)

target_link_libraries(test_shader_bank PRIVATE shader_bank) 