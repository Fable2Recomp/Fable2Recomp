#pragma once

#include <cstdint>
#include <mutex>
#include <utility>

uint32_t AllocateRedirectedCriticalSection(uint32_t guestAddr);
uint32_t TryGetRedirectedCS(uint32_t guestAddr);
