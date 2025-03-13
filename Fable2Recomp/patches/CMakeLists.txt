add_library(patches STATIC
    patches.cpp
)

target_include_directories(patches
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
) 