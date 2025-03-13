cmake_minimum_required(VERSION 3.10)

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/vfs)

# VFS test executables
add_executable(test_vfs test_vfs.cpp)
target_link_libraries(test_vfs PRIVATE vfs)

add_executable(test_bank_loader test_bank_loader.cpp)
target_link_libraries(test_bank_loader PRIVATE vfs)

add_executable(test_asset_manager test_asset_manager.cpp)
target_link_libraries(test_asset_manager PRIVATE vfs)

add_executable(test_bank_generator test_bank_generator.cpp)
target_link_libraries(test_bank_generator PRIVATE vfs)

add_executable(test_asset_manager_extended test_asset_manager_extended.cpp)
target_link_libraries(test_asset_manager_extended PRIVATE vfs)

# Copy test config file and create assets directory
configure_file(${CMAKE_SOURCE_DIR}/test/test_vfs_config.xml
               ${CMAKE_BINARY_DIR}/test_vfs_config.xml
               COPYONLY)

file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/test/assets) 