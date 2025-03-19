add_library(kernel STATIC
    kernel.cpp
)

target_include_directories(kernel
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/src
)

target_link_libraries(kernel
    PUBLIC
    os
)

target_compile_features(kernel PUBLIC cxx_std_17)

# Add compiler warnings
if(MSVC)
    target_compile_options(kernel PRIVATE /W4)
else()
    target_compile_options(kernel PRIVATE -Wall -Wextra -Wpedantic)
endif() 