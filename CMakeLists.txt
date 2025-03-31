cmake_minimum_required(VERSION 3.10)
project(Fable2Recomp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectories
add_subdirectory(src)

# Create main executable
add_executable(${PROJECT_NAME} Fable2Recomp.cpp)

# Link dependencies
target_link_libraries(${PROJECT_NAME}
    PRIVATE
    gpu
    ppc_recomp
) 