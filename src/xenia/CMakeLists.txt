# Add xenia source files
set(XENIA_SOURCES
    # Add xenia source files here
)

set(XENIA_HEADERS
    # Add xenia header files here
)

# Add sources to main target
target_sources(fable2 PRIVATE ${XENIA_SOURCES} ${XENIA_HEADERS}) 