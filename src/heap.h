/**
 * @file        src/heap.h
 *
 * @brief       Native heap interface for guest virtual memory.
 *
 * @copyright   Copyright (c) 2026 Tom Clay <tomc@tctechstuff.com>
 *              All rights reserved.
 *
 * @license     BSD 3-Clause License
 *              See LICENSE file in the project root for full license text.
 */

#pragma once

#include <cstdint>

namespace lh {

// Initialize the native dlmalloc heap over guest virtual memory.
// Must be called after rex::Runtime::Setup() and before game module launch.
bool InitNativeHeap();

}  // namespace lh
