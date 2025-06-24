#include "stdafx.h"
#include <kernel/function.h>
#include <kernel/xdm.h>

uint32_t QueryPerformanceCounterImpl(LARGE_INTEGER* lpPerformanceCount)
{
    lpPerformanceCount->QuadPart = ByteSwap(std::chrono::steady_clock::now().time_since_epoch().count());
    return TRUE;
}

uint32_t QueryPerformanceFrequencyImpl(LARGE_INTEGER* lpFrequency)
{
    constexpr auto Frequency = std::chrono::steady_clock::period::den / std::chrono::steady_clock::period::num;
    lpFrequency->QuadPart = ByteSwap(Frequency);
    return TRUE;
}

uint32_t GetTickCountImpl()
{
    return uint32_t(std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count());
}

void GlobalMemoryStatusImpl(XLPMEMORYSTATUS lpMemoryStatus)
{
    lpMemoryStatus->dwLength = sizeof(XMEMORYSTATUS);
    lpMemoryStatus->dwMemoryLoad = 0;
    lpMemoryStatus->dwTotalPhys = 0x20000000;
    lpMemoryStatus->dwAvailPhys = 0x20000000;
    lpMemoryStatus->dwTotalPageFile = 0x20000000;
    lpMemoryStatus->dwAvailPageFile = 0x20000000;
    lpMemoryStatus->dwTotalVirtual = 0x20000000;
    lpMemoryStatus->dwAvailVirtual = 0x20000000;
}

GUEST_FUNCTION_HOOK(sub_82CA2C60, memcpy);
//GUEST_FUNCTION_HOOK(sub_82CA30E8, memcpy);
GUEST_FUNCTION_HOOK(sub_822085D0, memcpy);
//GUEST_FUNCTION_HOOK(sub_822088B0, memcpy);
//GUEST_FUNCTION_HOOK(sub_822F6380, memcpy);
GUEST_FUNCTION_HOOK(sub_82CC9DA0, memcpy);

GUEST_FUNCTION_HOOK(sub_8223F970, memset);
GUEST_FUNCTION_HOOK(sub_82CA3190, memset);

#ifdef _WIN32
//GUEST_FUNCTION_HOOK(sub_82BD4CA8, OutputDebugStringA);
#else
//GUEST_FUNCTION_STUB(sub_82BD4CA8);
#endif

GUEST_FUNCTION_HOOK(sub_8221EB58, QueryPerformanceCounterImpl);
GUEST_FUNCTION_HOOK(sub_82CC0620, QueryPerformanceFrequencyImpl);
GUEST_FUNCTION_HOOK(sub_82266070, GetTickCountImpl);

GUEST_FUNCTION_HOOK(sub_82CBBBF0, GlobalMemoryStatusImpl);
