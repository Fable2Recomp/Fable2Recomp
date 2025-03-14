add_library(patches STATIC
    patches.cpp
    memory_patches.cpp
)

target_include_directories(patches
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(patches PRIVATE
    xbox
) 