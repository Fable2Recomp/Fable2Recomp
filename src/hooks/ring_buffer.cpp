#include <stdafx.h>
#include <filesystem>
#include <system_error>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <cstring>

#include <cpu/guest_thread.h>
#include <kernel/function.h>
#include <kernel/memory.h>
#include <kernel/heap.h>
#include <kernel/xam.h>
#include <kernel/io/file_system.h>
#include <kernel/xdbf.h>
#include <os/logger.h>
#include <os/process.h>
#include <preload_executable.h>
#include <chrono>
#include <ppc/ppc_context.h>
#include <kernel/imports.h>
#include <kernel/kernel_constants.h>


// ====== Ring Buffer ======

