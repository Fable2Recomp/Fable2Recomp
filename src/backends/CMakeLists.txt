# Add backend source files
set(BACKEND_SOURCES
    # Add backend source files here
)

set(BACKEND_HEADERS
    # Add backend header files here
)

# Add sources to main target
target_sources(fable2 PRIVATE ${BACKEND_SOURCES} ${BACKEND_HEADERS}) 