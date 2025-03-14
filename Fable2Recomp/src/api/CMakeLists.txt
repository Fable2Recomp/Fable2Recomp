cmake_minimum_required(VERSION 3.15)

# Source files
set(SOURCES
    CSD/Manager/manager.cpp
)

# Header files
set(HEADERS
    CSD/Manager/manager.h
    SWA.inl
)

# Create library
add_library(api STATIC
    api.cpp
)

# Add include directories
target_include_directories(api
    PUBLIC
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/include
)

# Link dependencies
target_link_libraries(api
    PUBLIC
        kernel
) 