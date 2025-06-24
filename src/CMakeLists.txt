# === Fable2 source files (do not build the executable here)

# Group core source files
set(FABLE2_CORE_SOURCES
    #${CMAKE_CURRENT_SOURCE_DIR}/exports.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/preload_executable.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/sdl_listener.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/stdafx.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/misc_impl.cpp
    ${EXTERN_DIR}/xxHash/xxhash.c
    ${EXTERN_DIR}/o1heap/o1heap.c
    ${EXTERN_DIR}/libmspack/libmspack/mspack/lzxd.c
)

set(FABLE2_CORE_HEADERS
    ${CMAKE_CURRENT_SOURCE_DIR}/logger.h
    ${CMAKE_CURRENT_SOURCE_DIR}/stdafx.h
)

file(GLOB PPC_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_func_mapping.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/ppc/ppc_recomp.*.cpp"
)

add_library(disasm STATIC
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/ppc-dis.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/disasm.c
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/ppc.h
)

target_include_directories(disasm PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon
)

set_target_properties(disasm PROPERTIES POSITION_INDEPENDENT_CODE ON)

# Mark source groups for IDE organization
source_group("Source Files" FILES ${FABLE2_CORE_SOURCES})
source_group("Header Files" FILES ${FABLE2_CORE_HEADERS})

# Collect module-specific sources

set(Fable2_RECOMP_KERNEL_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/imports.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/xdm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/heap.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/memory.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/xam.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/critical_section_patch.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/kernel/io/file_system.cpp
)

set(Fable2_RECOMP_PATCHES_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/patches/patches.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/patches/memory_patches.cpp
)

set(Fable2_RECOMP_HOOKS_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/hooks/ring_buffer.cpp
)

set(Fable2_RECOMP_LOCALE_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/locale/config_locale.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/locale/locale.cpp
)

if (WIN32)
    set(Fable2_RECOMP_OS_CXX_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/os/win32/logger_win32.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/win32/media_win32.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/win32/process_win32.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/win32/user_win32.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/win32/version_win32.cpp
    )
elseif (CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(Fable2_RECOMP_OS_CXX_SOURCES
        ${CMAKE_CURRENT_SOURCE_DIR}/os/linux/logger_linux.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/linux/media_linux.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/linux/process_linux.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/linux/user_linux.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/os/linux/version_linux.cpp
    )
endif()

set(Fable2_RECOMP_CPU_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/cpu/guest_thread.cpp
)

 set(Fable2_RECOMP_GPU_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/video.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/video_vulkan.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/shader/shaderc_util.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/imgui/imgui_common.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/imgui/imgui_font_builder.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/imgui/imgui_snapshot.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/gpu/rhi/plume_vulkan.cpp
)

if (Fable2_RECOMP_D3D12)
    list(APPEND Fable2_RECOMP_GPU_CXX_SOURCES
        "gpu/rhi/plume_d3d12.cpp"
    )
endif()

set(Fable2_RECOMP_APU_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/apu/audio.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/apu/driver/sdl3_driver.cpp
)

set(Fable2_RECOMP_HID_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/hid/hid.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/hid/driver/sdl_hid.cpp
)

set(Fable2_RECOMP_UI_CXX_SOURCES
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/achievement_menu.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/achievement_overlay.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/black_bar.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/button_guide.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/fader.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/game_window.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/imgui_utils.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/ui/installer_wizard.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/message_window.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/ui/options_menu.cpp
)

set(Fable2_RECOMP_INSTALL_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/install/installer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/install/iso_file_system.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/install/xcontent_file_system.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/install/hashes/game.cpp
)

set(Fable2_RECOMP_USER_CXX_SOURCES
    #${CMAKE_CURRENT_SOURCE_DIR}/user/achievement_data.cpp
    #${CMAKE_CURRENT_SOURCE_DIR}/user/achievement_manager.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/user/config.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/user/registry.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/user/paths.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/user/persistent_data.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/user/persistent_storage_manager.cpp
)

set(Fable2_RECOMP_XENON_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/disasm.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/image.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/memory_mapped_file.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/xdbf_wrapper.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/xex.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/xenon/xex_patcher.cpp
)

set(Fable2_RECOMP_TOOLS_CXX_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/stb/stb_image_impl.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/stb/stb_rect_pack.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/tools/stb/stb_truetype_impl.cpp
)

# Optional: group source files for better IDE visibility
source_group("Kernel" FILES ${Fable2_RECOMP_KERNEL_CXX_SOURCES})
source_group("Locale" FILES ${Fable2_RECOMP_LOCALE_CXX_SOURCES})
source_group("CPU" FILES ${Fable2_RECOMP_CPU_CXX_SOURCES})
source_group("GPU" FILES ${Fable2_RECOMP_GPU_CXX_SOURCES})
source_group("HID" FILES ${Fable2_RECOMP_HID_CXX_SOURCES})
source_group("User" FILES ${Fable2_RECOMP_USER_CXX_SOURCES})
source_group("OS" FILES ${Fable2_RECOMP_OS_CXX_SOURCES})

# Combine all source files into one list
set(FABLE2_SOURCES
    ${FABLE2_CORE_SOURCES}
    ${PPC_SOURCES}
    ${Fable2_RECOMP_HOOKS_CXX_SOURCES}
    ${Fable2_RECOMP_KERNEL_CXX_SOURCES}
    ${Fable2_RECOMP_LOCALE_CXX_SOURCES}
    ${Fable2_RECOMP_OS_CXX_SOURCES}
    ${Fable2_RECOMP_CPU_CXX_SOURCES}
    ${Fable2_RECOMP_GPU_CXX_SOURCES}
    ${Fable2_RECOMP_APU_CXX_SOURCES}
    ${Fable2_RECOMP_HID_CXX_SOURCES}
    ${Fable2_RECOMP_UI_CXX_SOURCES}
    ${Fable2_RECOMP_INSTALL_CXX_SOURCES}
    ${Fable2_RECOMP_USER_CXX_SOURCES}
    ${Fable2_RECOMP_XENON_CXX_SOURCES}
    ${Fable2_RECOMP_TOOLS_CXX_SOURCES}
)

set(FABLE2_HEADERS
    ${FABLE2_CORE_HEADERS}
)

# Export variables to parent scope (used by top-level CMakeLists.txt)
set(FABLE2_SOURCES ${FABLE2_SOURCES} PARENT_SCOPE)
set(FABLE2_HEADERS ${FABLE2_HEADERS} PARENT_SCOPE)

message(STATUS "Loaded Fable2 source modules from src/")

