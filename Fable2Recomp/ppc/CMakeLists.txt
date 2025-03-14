# Add PPC recompilation files
file(GLOB PPC_RECOMP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/ppc_recomp.*.cpp")

# Add source files to the parent target
target_sources(fable2 PRIVATE ${PPC_RECOMP_SOURCES})

# Set properties for PPC recompilation files
set_source_files_properties(${PPC_RECOMP_SOURCES} PROPERTIES SKIP_PRECOMPILE_HEADERS ON) 