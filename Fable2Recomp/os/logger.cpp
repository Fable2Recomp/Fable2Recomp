#include "stdafx.h"
#include "os/logger.h"
#include <ctime>

namespace xe {

std::mutex Logger::s_mutex;
std::ofstream Logger::s_log_file;
bool Logger::s_initialized = false;

void Logger::Initialize() {
    std::lock_guard<std::mutex> lock(s_mutex);
    if (s_initialized) return;
    
    // Create logs directory if it doesn't exist
    std::filesystem::create_directories("logs");
    
    // Open log file with timestamp
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    std::stringstream ss;
    ss << "logs/fable2_" << std::put_time(std::localtime(&time), "%Y%m%d_%H%M%S") << ".log";
    
    s_log_file.open(ss.str());
    s_initialized = true;
    
    LOG_INFO("Logger initialized");
}

void Logger::Shutdown() {
    std::lock_guard<std::mutex> lock(s_mutex);
    if (!s_initialized) return;
    
    if (s_log_file.is_open()) {
        s_log_file.close();
    }
    
    s_initialized = false;
    LOG_INFO("Logger shut down");
}

void Logger::Log(LogLevel level, const char* file, int line, const char* func, const char* fmt, ...) {
    std::lock_guard<std::mutex> lock(s_mutex);
    if (!s_initialized) return;
    
    // Get current time
    auto now = std::chrono::system_clock::now();
    auto time = std::chrono::system_clock::to_time_t(now);
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(
        now.time_since_epoch()).count() % 1000;
    
    // Format message
    char level_str[8];
    switch (level) {
        case LogLevel::Debug: strcpy(level_str, "DEBUG"); break;
        case LogLevel::Info: strcpy(level_str, "INFO"); break;
        case LogLevel::Warning: strcpy(level_str, "WARN"); break;
        case LogLevel::Error: strcpy(level_str, "ERROR"); break;
    }
    
    // Get filename from path
    const char* filename = strrchr(file, '/');
    if (!filename) filename = strrchr(file, '\\');
    if (!filename) filename = file;
    else filename++;
    
    // Format the message
    char message[4096];
    va_list args;
    va_start(args, fmt);
    vsnprintf(message, sizeof(message), fmt, args);
    va_end(args);
    
    // Write to console
    printf("[%s][%s:%d][%s] %s\n", level_str, filename, line, func, message);
    
    // Write to file
    if (s_log_file.is_open()) {
        s_log_file << std::put_time(std::localtime(&time), "%Y-%m-%d %H:%M:%S")
                  << "." << std::setfill('0') << std::setw(3) << ms << " "
                  << "[" << level_str << "][" << filename << ":" << line << "][" << func << "] "
                  << message << std::endl;
    }
}

} // namespace xe 