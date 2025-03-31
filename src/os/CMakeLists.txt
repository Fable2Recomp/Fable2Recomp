add_library(os STATIC
    os.cpp
    logger.cpp
)

target_include_directories(os
    PUBLIC
    ${CMAKE_SOURCE_DIR}/src
)

target_compile_features(os PUBLIC cxx_std_17)

# Add compiler warnings
if(MSVC)
    target_compile_options(os PRIVATE /W4)
else()
    target_compile_options(os PRIVATE -Wall -Wextra -Wpedantic)
endif() 