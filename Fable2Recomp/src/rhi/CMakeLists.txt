# Add RHI source files
set(RHI_SOURCES
    # Add RHI source files here
)

set(RHI_HEADERS
    # Add RHI header files here
)

# Add sources to main target
target_sources(fable2 PRIVATE ${RHI_SOURCES} ${RHI_HEADERS}) 