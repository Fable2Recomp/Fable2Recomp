add_library(apu STATIC
    apu.cpp
)

target_include_directories(apu
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
) 