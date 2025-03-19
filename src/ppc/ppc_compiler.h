#pragma once

#ifdef _MSC_VER
#define PPC_WEAK_FUNC(name) __declspec(dllexport) void name()
#define PPC_FUNC_IMPL(name) void name()
#define PPC_FUNC_PROLOGUE()
#define PPC_STORE_U32(addr, val) (*(uint32_t*)(addr) = _byteswap_ulong(val))
#define PPC_STORE_U64(addr, val) (*(uint64_t*)(addr) = _byteswap_uint64(val))
#define PPC_LOAD_U32(addr) _byteswap_ulong(*(uint32_t*)(addr))
#define PPC_LOAD_U64(addr) _byteswap_uint64(*(uint64_t*)(addr))
#else
#define PPC_WEAK_FUNC(name) __attribute__((weak)) void name()
#define PPC_FUNC_IMPL(name) void name()
#define PPC_FUNC_PROLOGUE()
#define PPC_STORE_U32(addr, val) (*(uint32_t*)(addr) = __builtin_bswap32(val))
#define PPC_STORE_U64(addr, val) (*(uint64_t*)(addr) = __builtin_bswap64(val))
#define PPC_LOAD_U32(addr) __builtin_bswap32(*(uint32_t*)(addr))
#define PPC_LOAD_U64(addr) __builtin_bswap64(*(uint64_t*)(addr))
#endif 