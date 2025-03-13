#pragma once

#include <cstdint>
#include <cstring>
#include "xbox.h"

namespace xe {

// File attributes
enum class X_FILE_ATTRIBUTES : uint32_t {
    NONE = 0x0000,
    READONLY = 0x0001,
    HIDDEN = 0x0002,
    SYSTEM = 0x0004,
    DIRECTORY = 0x0010,
    ARCHIVE = 0x0020,
    DEVICE = 0x0040,
    NORMAL = 0x0080,
    TEMPORARY = 0x0100,
    SPARSE_FILE = 0x0200,
    REPARSE_POINT = 0x0400,
    COMPRESSED = 0x0800,
    ENCRYPTED = 0x4000,
};

// Overlapped structure
struct XAM_OVERLAPPED {
    uint32_t result;
    uint32_t length;
    uint32_t context;
    uint32_t event;
    uint32_t completion_routine;
    uint32_t completion_context;
    uint32_t extended_error;
};

} // namespace xe 