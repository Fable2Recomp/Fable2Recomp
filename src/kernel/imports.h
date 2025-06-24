#pragma once

#include <cstdint>

uint32_t NtClose(uint32_t handle);

void KeBugCheckEx(uint32_t bugCode, uint32_t p1, uint32_t p2, uint32_t p3, uint32_t p4);
void RtlEnterCriticalSection(XRTL_CRITICAL_SECTION* cs);
void RtlLeaveCriticalSection(XRTL_CRITICAL_SECTION* cs);
uint32_t KeTlsGetValue(uint32_t index);
uint32_t KeTlsSetValue(uint32_t index, uint32_t value);
uint32_t KeTlsAlloc();
uint32_t NtResumeThread(GuestThreadHandle* hThread, uint32_t* suspendCount);
uint32_t RtlInitializeCriticalSection(XRTL_CRITICAL_SECTION* cs);
uint32_t NtWaitForSingleObjectEx(uint32_t Handle, uint32_t WaitMode, uint32_t Alertable, be<int64_t>* Timeout);
uint32_t RtlAllocateHeap(uint32_t heapHandle, uint32_t flags, uint32_t size);
uint32_t KeGetCurrentProcessType();
uint32_t ExCreateThread(be<uint32_t>* handle, uint32_t stackSize, be<uint32_t>* threadId, uint32_t xApiThreadStartup, uint32_t startAddress, uint32_t startContext, uint32_t creationFlags);
