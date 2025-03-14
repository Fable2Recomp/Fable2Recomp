add_library(vfs STATIC
    vfs.cpp
)

target_include_directories(vfs PUBLIC
    ${CMAKE_SOURCE_DIR}/src
) 