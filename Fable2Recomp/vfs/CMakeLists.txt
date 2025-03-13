cmake_minimum_required(VERSION 3.10)

# Create VFS library
add_library(vfs STATIC
    vfs.cpp
    bank_loader.cpp
    asset_types.cpp
    asset_manager.cpp
)

# Include directories
target_include_directories(vfs PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}
)

# Find required packages
find_package(ZLIB REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(TINYXML2 REQUIRED tinyxml2)

# Link dependencies
target_link_libraries(vfs PUBLIC
    gpu
    ZLIB::ZLIB
    ${TINYXML2_LIBRARIES}
)

target_include_directories(vfs PRIVATE ${TINYXML2_INCLUDE_DIRS})
target_compile_definitions(vfs PRIVATE HAVE_TINYXML2) 