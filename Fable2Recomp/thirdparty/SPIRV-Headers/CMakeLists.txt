cmake_minimum_required(VERSION 3.10)
project(SPIRV-Headers)

set(SPIRV_HEADERS_INSTALL OFF CACHE BOOL "Install SPIRV Headers")
set(SPIRV_HEADERS_SKIP_INSTALL ON CACHE BOOL "Skip installation of SPIRV Headers")

add_subdirectory(SPIRV-Headers) 