#pragma once

#include "stdafx.h"
#include <vector>
#include <unordered_map>

namespace xe {

class Kernel {
public:
    static bool Initialize();
    static void Shutdown();
    static void Update();
    
    // Process management
    static bool CreateProcess(const std::string& name, uint32_t& process_id);
    static bool TerminateProcess(uint32_t process_id);
    static bool IsProcessRunning(uint32_t process_id);
    
    // Thread management
    static bool CreateThread(uint32_t process_id, uint32_t entry_point, uint32_t& thread_id);
    static bool TerminateThread(uint32_t thread_id);
    static bool SuspendThread(uint32_t thread_id);
    static bool ResumeThread(uint32_t thread_id);
    static bool IsThreadRunning(uint32_t thread_id);
    
    // Memory management
    static bool AllocateMemory(uint32_t process_id, uint32_t size, uint32_t& address);
    static bool FreeMemory(uint32_t process_id, uint32_t address);
    static bool ProtectMemory(uint32_t process_id, uint32_t address, uint32_t size, uint32_t protection);
    static bool ReadMemory(uint32_t process_id, uint32_t address, std::vector<uint8_t>& data);
    static bool WriteMemory(uint32_t process_id, uint32_t address, const std::vector<uint8_t>& data);
    
    // Module management
    static bool LoadModule(uint32_t process_id, const std::string& name, uint32_t& module_id);
    static bool UnloadModule(uint32_t process_id, uint32_t module_id);
    static bool GetModuleBase(uint32_t process_id, uint32_t module_id, uint32_t& base_address);
    
    // Synchronization
    static bool CreateMutex(uint32_t process_id, const std::string& name, uint32_t& mutex_id);
    static bool CreateSemaphore(uint32_t process_id, uint32_t initial_count, uint32_t maximum_count, uint32_t& semaphore_id);
    static bool CreateEvent(uint32_t process_id, bool manual_reset, bool initial_state, uint32_t& event_id);
    static bool WaitForObject(uint32_t process_id, uint32_t object_id, uint32_t timeout_ms);
    static bool ReleaseObject(uint32_t process_id, uint32_t object_id);
    
private:
    struct Process {
        uint32_t id;
        std::string name;
        std::vector<uint32_t> thread_ids;
        std::vector<uint32_t> module_ids;
        std::unordered_map<uint32_t, std::vector<uint8_t>> memory;
    };
    
    struct Thread {
        uint32_t id;
        uint32_t process_id;
        uint32_t entry_point;
        bool running;
        bool suspended;
    };
    
    struct Module {
        uint32_t id;
        uint32_t process_id;
        std::string name;
        uint32_t base_address;
        uint32_t size;
    };
    
    struct Mutex {
        uint32_t id;
        uint32_t process_id;
        std::string name;
        bool locked;
        uint32_t owner_thread_id;
    };
    
    struct Semaphore {
        uint32_t id;
        uint32_t process_id;
        uint32_t current_count;
        uint32_t maximum_count;
    };
    
    struct Event {
        uint32_t id;
        uint32_t process_id;
        bool manual_reset;
        bool signaled;
    };
    
    static std::unordered_map<uint32_t, Process> s_processes;
    static std::unordered_map<uint32_t, Thread> s_threads;
    static std::unordered_map<uint32_t, Module> s_modules;
    static std::unordered_map<uint32_t, Mutex> s_mutexes;
    static std::unordered_map<uint32_t, Semaphore> s_semaphores;
    static std::unordered_map<uint32_t, Event> s_events;
    
    static uint32_t s_next_process_id;
    static uint32_t s_next_thread_id;
    static uint32_t s_next_module_id;
    static uint32_t s_next_object_id;
    
    static bool ValidateProcessId(uint32_t process_id);
    static bool ValidateThreadId(uint32_t thread_id);
    static bool ValidateModuleId(uint32_t module_id);
    static bool ValidateObjectId(uint32_t object_id);
    static uint32_t GenerateId(uint32_t& next_id);
};

} // namespace xe 