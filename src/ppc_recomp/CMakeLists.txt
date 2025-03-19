set(PPC_RECOMP_SOURCES
    core/decoder.cpp
    core/recompiler.cpp
)

set(PPC_RECOMP_HEADERS
    include/ppc/instructions.h
    include/ppc/decoder.h
    include/ppc/recompiler.h
)

add_library(ppc_recomp STATIC ${PPC_RECOMP_SOURCES} ${PPC_RECOMP_HEADERS})

target_include_directories(ppc_recomp
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_features(ppc_recomp PUBLIC cxx_std_17)

# Add compiler warnings
if(MSVC)
    target_compile_options(ppc_recomp PRIVATE /W4)
else()
    target_compile_options(ppc_recomp PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Add tests
enable_testing()
add_subdirectory(tests) 