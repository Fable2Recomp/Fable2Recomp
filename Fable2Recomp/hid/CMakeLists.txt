add_library(hid STATIC
    hid.cpp
)

target_include_directories(hid
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
) 