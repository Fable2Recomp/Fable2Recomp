cmake_minimum_required(VERSION 3.15)

# Header files
set(HEADERS
    memory.h
)

# Create interface library (header-only)
add_library(base INTERFACE)

# Add include directories
target_include_directories(base
    INTERFACE
        ${CMAKE_SOURCE_DIR}/src
) 