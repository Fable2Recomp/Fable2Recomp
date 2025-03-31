# Add PPC recompilation files
file(GLOB PPC_RECOMP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/ppc_recomp.*.cpp")

# Add improved recompilation files
set(PPC_IMPROVED_SOURCES
    ppc_recomp_improved.cpp
)

# Add source files to the parent target
target_sources(fable2 PRIVATE 
    ${PPC_RECOMP_SOURCES}
    ${PPC_IMPROVED_SOURCES}
)

# Set properties for PPC recompilation files
set_source_files_properties(${PPC_RECOMP_SOURCES} PROPERTIES SKIP_PRECOMPILE_HEADERS ON)

# Add include directories
target_include_directories(fable2 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Set C++ standard for PPC recompilation
set_target_properties(fable2 PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
) 