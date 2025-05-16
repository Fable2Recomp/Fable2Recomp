# cmake/SDL3/SDL3Config.cmake
include_guard(GLOBAL)

set(SDL3_FOUND TRUE)
set(SDL3_VERSION "3.0.0")

# Provide static alias
if(NOT TARGET SDL3::SDL3)
    add_library(SDL3::SDL3 ALIAS SDL3-static)
endif()

# Provide dummy shared alias (even if not used)
if(NOT TARGET SDL3::SDL3-shared)
    add_library(SDL3::SDL3-shared INTERFACE IMPORTED)
endif()
