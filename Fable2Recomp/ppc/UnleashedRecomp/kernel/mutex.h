#pragma once
#include <stdint.h>
#include <cstddef>
#include "ppc_context.h"
#include <type_traits>
#include <mutex>
#include <utility>
#include <cassert>
#include <vector>
#include <memory>

#ifdef _WIN32

struct Mutex : CRITICAL_SECTION
{
    Mutex()
    {
        InitializeCriticalSection(this);
    }
    ~Mutex()
    {
        DeleteCriticalSection(this);
    }

    void lock()
    {
        EnterCriticalSection(this);
    }

    void unlock()
    {
        LeaveCriticalSection(this);
    }
};

#else

using Mutex = std::mutex;

#endif
