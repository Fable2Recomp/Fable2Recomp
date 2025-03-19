add_library(kernel STATIC
    kernel.cpp
)

target_include_directories(kernel
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
) 