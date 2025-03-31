cmake_minimum_required(VERSION 3.15)

# Test source files
set(TEST_SOURCES
    asset_loading_test.cpp
    main_test.cpp
)

# Create test executable
add_executable(fable2_tests ${TEST_SOURCES})

# Link test dependencies
target_link_libraries(fable2_tests
    PRIVATE
        assets
        vfs
        GTest::GTest
        GTest::Main
)

# Add test
add_test(NAME fable2_tests COMMAND fable2_tests)

# Set test properties
set_tests_properties(fable2_tests PROPERTIES
    ENVIRONMENT "DATA_DIR=${CMAKE_SOURCE_DIR}/data"
) 