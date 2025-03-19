#include "stdafx.h"
#include "kernel.h"
#include "os/logger.h"
#include <algorithm>

namespace xe {

std::unordered_map<uint32_t, Kernel::Process> Kernel::s_processes;
std::unordered_map<uint32_t, Kernel::Thread> Kernel::s_threads;
std::unordered_map<uint32_t, Kernel::Module> Kernel::s_modules;
std::unordered_map<uint32_t, Kernel::Mutex> Kernel::s_mutexes;
std::unordered_map<uint32_t, Kernel::Semaphore> Kernel::s_semaphores;
std::unordered_map<uint32_t, Kernel::Event> Kernel::s_events;

uint32_t Kernel::s_next_process_id = 1;
uint32_t Kernel::s_next_thread_id = 1;
uint32_t Kernel::s_next_module_id = 1;
uint32_t Kernel::s_next_object_id = 1;

bool Kernel::Initialize() {
    LOG_INFO("Kernel initialized");
    return true;
}

void Kernel::Shutdown() {
    // Terminate all processes
    for (const auto& [id, process] : s_processes) {
        TerminateProcess(id);
    }
    
    // Clear all tables
    s_processes.clear();
    s_threads.clear();
    s_modules.clear();
    s_mutexes.clear();
    s_semaphores.clear();
    s_events.clear();
    
    LOG_INFO("Kernel shut down");
}

void Kernel::Update() {
    // Update process states
    for (const auto& [id, process] : s_processes) {
        bool has_running_threads = false;
        for (uint32_t thread_id : process.thread_ids) {
            auto thread_it = s_threads.find(thread_id);
            if (thread_it != s_threads.end() && thread_it->second.running) {
                has_running_threads = true;
                break;
            }
        }
        
        if (!has_running_threads) {
            LOG_DEBUG("Process {} has no running threads", process.name.c_str());
        }
    }
}

bool Kernel::CreateProcess(const std::string& name, uint32_t& process_id) {
    process_id = GenerateId(s_next_process_id);
    
    Process process;
    process.id = process_id;
    process.name = name;
    
    s_processes[process_id] = std::move(process);
    
    LOG_INFO("Created process: {} (ID: {})", name.c_str(), process_id);
    return true;
}

bool Kernel::TerminateProcess(uint32_t process_id) {
    auto it = s_processes.find(process_id);
    if (it == s_processes.end()) {
        LOG_ERROR("Invalid process ID: {}", process_id);
        return false;
    }
    
    // Terminate all threads
    for (uint32_t thread_id : it->second.thread_ids) {
        TerminateThread(thread_id);
    }
    
    // Unload all modules
    for (uint32_t module_id : it->second.module_ids) {
        UnloadModule(process_id, module_id);
    }
    
    // Free all memory
    it->second.memory.clear();
    
    const std::string process_name = it->second.name;
    s_processes.erase(it);
    
    LOG_INFO("Terminated process: {} (ID: {})", process_name.c_str(), process_id);
    return true;
}

bool Kernel::IsProcessRunning(uint32_t process_id) {
    auto it = s_processes.find(process_id);
    if (it == s_processes.end()) {
        return false;
    }
    
    for (uint32_t thread_id : it->second.thread_ids) {
        auto thread_it = s_threads.find(thread_id);
        if (thread_it != s_threads.end() && thread_it->second.running) {
            return true;
        }
    }
    
    return false;
}

bool Kernel::CreateThread(uint32_t process_id, uint32_t entry_point, uint32_t& thread_id) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    thread_id = GenerateId(s_next_thread_id);
    
    Thread thread;
    thread.id = thread_id;
    thread.process_id = process_id;
    thread.entry_point = entry_point;
    thread.running = true;
    thread.suspended = false;
    
    s_threads[thread_id] = std::move(thread);
    s_processes[process_id].thread_ids.push_back(thread_id);
    
    LOG_INFO("Created thread in process {} (ID: {})", process_id, thread_id);
    return true;
}

bool Kernel::TerminateThread(uint32_t thread_id) {
    auto it = s_threads.find(thread_id);
    if (it == s_threads.end()) {
        LOG_ERROR("Invalid thread ID: {}", thread_id);
        return false;
    }
    
    uint32_t process_id = it->second.process_id;
    
    // Remove thread from process
    auto& thread_ids = s_processes[process_id].thread_ids;
    thread_ids.erase(std::remove(thread_ids.begin(), thread_ids.end(), thread_id), thread_ids.end());
    
    s_threads.erase(it);
    
    LOG_INFO("Terminated thread: {} (Process: {})", thread_id, process_id);
    return true;
}

bool Kernel::SuspendThread(uint32_t thread_id) {
    auto it = s_threads.find(thread_id);
    if (it == s_threads.end()) {
        LOG_ERROR("Invalid thread ID: {}", thread_id);
        return false;
    }
    
    it->second.suspended = true;
    
    LOG_DEBUG("Suspended thread: {}", thread_id);
    return true;
}

bool Kernel::ResumeThread(uint32_t thread_id) {
    auto it = s_threads.find(thread_id);
    if (it == s_threads.end()) {
        LOG_ERROR("Invalid thread ID: {}", thread_id);
        return false;
    }
    
    it->second.suspended = false;
    
    LOG_DEBUG("Resumed thread: {}", thread_id);
    return true;
}

bool Kernel::IsThreadRunning(uint32_t thread_id) {
    auto it = s_threads.find(thread_id);
    if (it == s_threads.end()) {
        return false;
    }
    
    return it->second.running && !it->second.suspended;
}

bool Kernel::AllocateMemory(uint32_t process_id, uint32_t size, uint32_t& address) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    // Find a free address range
    address = 0x80000000; // Start at typical PPC memory base
    
    for (const auto& [addr, data] : s_processes[process_id].memory) {
        if (address + size <= addr) {
            break;
        }
        address = addr + data.size();
    }
    
    // Allocate memory
    s_processes[process_id].memory[address].resize(size);
    
    LOG_DEBUG("Allocated {} bytes at 0x{:08X} for process {}", size, address, process_id);
    return true;
}

bool Kernel::FreeMemory(uint32_t process_id, uint32_t address) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    auto it = s_processes[process_id].memory.find(address);
    if (it == s_processes[process_id].memory.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    s_processes[process_id].memory.erase(it);
    
    LOG_DEBUG("Freed memory at 0x{:08X} for process {}", address, process_id);
    return true;
}

bool Kernel::ProtectMemory(uint32_t process_id, uint32_t address, uint32_t size, uint32_t protection) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    auto it = s_processes[process_id].memory.find(address);
    if (it == s_processes[process_id].memory.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    if (it->second.size() != size) {
        LOG_ERROR("Memory size mismatch: expected {}, got {}", size, it->second.size());
        return false;
    }
    
    LOG_DEBUG("Protected memory at 0x{:08X} (size: {}, protection: 0x{:08X}) for process {}", 
              address, size, protection, process_id);
    return true;
}

bool Kernel::ReadMemory(uint32_t process_id, uint32_t address, std::vector<uint8_t>& data) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    auto it = s_processes[process_id].memory.find(address);
    if (it == s_processes[process_id].memory.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    data = it->second;
    return true;
}

bool Kernel::WriteMemory(uint32_t process_id, uint32_t address, const std::vector<uint8_t>& data) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    auto it = s_processes[process_id].memory.find(address);
    if (it == s_processes[process_id].memory.end()) {
        LOG_ERROR("Invalid memory address: 0x{:08X}", address);
        return false;
    }
    
    it->second = data;
    return true;
}

bool Kernel::LoadModule(uint32_t process_id, const std::string& name, uint32_t& module_id) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    module_id = GenerateId(s_next_module_id);
    
    Module module;
    module.id = module_id;
    module.process_id = process_id;
    module.name = name;
    module.base_address = 0; // Will be set by the loader
    module.size = 0; // Will be set by the loader
    
    s_modules[module_id] = std::move(module);
    s_processes[process_id].module_ids.push_back(module_id);
    
    LOG_INFO("Loaded module: {} (ID: {}) for process {}", name.c_str(), module_id, process_id);
    return true;
}

bool Kernel::UnloadModule(uint32_t process_id, uint32_t module_id) {
    if (!ValidateProcessId(process_id) || !ValidateModuleId(module_id)) {
        return false;
    }
    
    auto it = s_modules.find(module_id);
    if (it->second.process_id != process_id) {
        LOG_ERROR("Module {} does not belong to process {}", module_id, process_id);
        return false;
    }
    
    // Remove module from process
    auto& module_ids = s_processes[process_id].module_ids;
    module_ids.erase(std::remove(module_ids.begin(), module_ids.end(), module_id), module_ids.end());
    
    s_modules.erase(it);
    
    LOG_INFO("Unloaded module: {} (ID: {}) from process {}", it->second.name.c_str(), module_id, process_id);
    return true;
}

bool Kernel::GetModuleBase(uint32_t process_id, uint32_t module_id, uint32_t& base_address) {
    if (!ValidateProcessId(process_id) || !ValidateModuleId(module_id)) {
        return false;
    }
    
    auto it = s_modules.find(module_id);
    if (it->second.process_id != process_id) {
        LOG_ERROR("Module {} does not belong to process {}", module_id, process_id);
        return false;
    }
    
    base_address = it->second.base_address;
    return true;
}

bool Kernel::CreateMutex(uint32_t process_id, const std::string& name, uint32_t& mutex_id) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    mutex_id = GenerateId(s_next_object_id);
    
    Mutex mutex;
    mutex.id = mutex_id;
    mutex.process_id = process_id;
    mutex.name = name;
    mutex.locked = false;
    mutex.owner_thread_id = 0;
    
    s_mutexes[mutex_id] = std::move(mutex);
    
    LOG_INFO("Created mutex: {} (ID: {}) for process {}", name.c_str(), mutex_id, process_id);
    return true;
}

bool Kernel::CreateSemaphore(uint32_t process_id, uint32_t initial_count, uint32_t maximum_count, uint32_t& semaphore_id) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    semaphore_id = GenerateId(s_next_object_id);
    
    Semaphore semaphore;
    semaphore.id = semaphore_id;
    semaphore.process_id = process_id;
    semaphore.current_count = initial_count;
    semaphore.maximum_count = maximum_count;
    
    s_semaphores[semaphore_id] = std::move(semaphore);
    
    LOG_INFO("Created semaphore (ID: {}) for process {} (initial: {}, maximum: {})", 
              semaphore_id, process_id, initial_count, maximum_count);
    return true;
}

bool Kernel::CreateEvent(uint32_t process_id, bool manual_reset, bool initial_state, uint32_t& event_id) {
    if (!ValidateProcessId(process_id)) {
        return false;
    }
    
    event_id = GenerateId(s_next_object_id);
    
    Event event;
    event.id = event_id;
    event.process_id = process_id;
    event.manual_reset = manual_reset;
    event.signaled = initial_state;
    
    s_events[event_id] = std::move(event);
    
    LOG_INFO("Created event (ID: {}) for process {} (manual reset: {}, initial state: {})", 
              event_id, process_id, manual_reset, initial_state);
    return true;
}

bool Kernel::WaitForObject(uint32_t process_id, uint32_t object_id, uint32_t timeout_ms) {
    if (!ValidateProcessId(process_id) || !ValidateObjectId(object_id)) {
        return false;
    }
    
    // Check mutex
    auto mutex_it = s_mutexes.find(object_id);
    if (mutex_it != s_mutexes.end()) {
        if (!mutex_it->second.locked) {
            mutex_it->second.locked = true;
            mutex_it->second.owner_thread_id = process_id;
            return true;
        }
        return false;
    }
    
    // Check semaphore
    auto semaphore_it = s_semaphores.find(object_id);
    if (semaphore_it != s_semaphores.end()) {
        if (semaphore_it->second.current_count > 0) {
            semaphore_it->second.current_count--;
            return true;
        }
        return false;
    }
    
    // Check event
    auto event_it = s_events.find(object_id);
    if (event_it != s_events.end()) {
        if (event_it->second.signaled) {
            if (!event_it->second.manual_reset) {
                event_it->second.signaled = false;
            }
            return true;
        }
        return false;
    }
    
    return false;
}

bool Kernel::ReleaseObject(uint32_t process_id, uint32_t object_id) {
    if (!ValidateProcessId(process_id) || !ValidateObjectId(object_id)) {
        return false;
    }
    
    // Check mutex
    auto mutex_it = s_mutexes.find(object_id);
    if (mutex_it != s_mutexes.end()) {
        if (mutex_it->second.locked && mutex_it->second.owner_thread_id == process_id) {
            mutex_it->second.locked = false;
            mutex_it->second.owner_thread_id = 0;
            return true;
        }
        return false;
    }
    
    // Check semaphore
    auto semaphore_it = s_semaphores.find(object_id);
    if (semaphore_it != s_semaphores.end()) {
        if (semaphore_it->second.current_count < semaphore_it->second.maximum_count) {
            semaphore_it->second.current_count++;
            return true;
        }
        return false;
    }
    
    // Check event
    auto event_it = s_events.find(object_id);
    if (event_it != s_events.end()) {
        event_it->second.signaled = true;
        return true;
    }
    
    return false;
}

bool Kernel::ValidateProcessId(uint32_t process_id) {
    return s_processes.find(process_id) != s_processes.end();
}

bool Kernel::ValidateThreadId(uint32_t thread_id) {
    return s_threads.find(thread_id) != s_threads.end();
}

bool Kernel::ValidateModuleId(uint32_t module_id) {
    return s_modules.find(module_id) != s_modules.end();
}

bool Kernel::ValidateObjectId(uint32_t object_id) {
    return s_mutexes.find(object_id) != s_mutexes.end() ||
           s_semaphores.find(object_id) != s_semaphores.end() ||
           s_events.find(object_id) != s_events.end();
}

uint32_t Kernel::GenerateId(uint32_t& next_id) {
    return next_id++;
}

} // namespace xe 