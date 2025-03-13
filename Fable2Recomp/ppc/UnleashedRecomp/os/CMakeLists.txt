cmake_minimum_required(VERSION 3.10)

# Add OS library
add_library(os STATIC
    linux/logger_linux.cpp
    logger.h
)

target_include_directories(os
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/..
)

target_link_libraries(os
    PUBLIC
    ${FMT_LIBRARIES}
) 