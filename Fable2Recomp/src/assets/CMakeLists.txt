add_library(assets STATIC
    data_loader.cpp
)

target_include_directories(assets PUBLIC
    ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(assets PUBLIC
    vfs
) 