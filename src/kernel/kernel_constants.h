// kernel_constants.h
#pragma once

constexpr uint32_t kKernelStructBase       = 0x90000000;
constexpr uint32_t kOldCriticalSection     = 0x832EFEA0;

constexpr uint32_t kCriticalSectionAddr    = kKernelStructBase + 0x000;
constexpr uint32_t kCallbackNodeAddr       = kKernelStructBase + 0x100;
constexpr uint32_t kCallbackListHeadAddr   = kKernelStructBase + 0x110;

constexpr uint32_t kNewCriticalSection     = kCriticalSectionAddr;

