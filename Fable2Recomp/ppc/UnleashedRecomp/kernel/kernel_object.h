#pragma once
#include <cstdint>
#include <memory>
#include <unordered_map>

class KernelObject {
public:
    virtual ~KernelObject() = default;
};

template<typename T>
T* CreateKernelObject() {
    static uint32_t nextHandle = 0x80000000;
    auto obj = std::make_unique<T>();
    auto* ptr = obj.get();
    g_kernelObjects[nextHandle] = std::move(obj);
    return ptr;
}

template<typename T>
T* GetKernelObject(uint32_t handle) {
    auto it = g_kernelObjects.find(handle);
    if (it == g_kernelObjects.end()) {
        return nullptr;
    }
    return static_cast<T*>(it->second.get());
}

inline uint32_t GetKernelHandle(KernelObject* obj) {
    for (const auto& [handle, ptr] : g_kernelObjects) {
        if (ptr.get() == obj) {
            return handle;
        }
    }
    return 0;
}

inline std::unordered_map<uint32_t, std::unique_ptr<KernelObject>> g_kernelObjects; 