#pragma once

#include "stdafx.h"

namespace xe {

enum class LogLevel {
    Debug,
    Info,
    Warning,
    Error
};

class Logger {
public:
    static void Initialize();
    static void Shutdown();
    
    static void Log(LogLevel level, const char* file, int line, const char* func, const char* fmt, ...);
    
private:
    static std::mutex s_mutex;
    static std::ofstream s_log_file;
    static bool s_initialized;
};

#define LOG_DEBUG(...) Logger::Log(LogLevel::Debug, __FILE__, __LINE__, __FUNCTION__, __VA_ARGS__)
#define LOG_INFO(...) Logger::Log(LogLevel::Info, __FILE__, __LINE__, __FUNCTION__, __VA_ARGS__)
#define LOG_WARNING(...) Logger::Log(LogLevel::Warning, __FILE__, __LINE__, __FUNCTION__, __VA_ARGS__)
#define LOG_ERROR(...) Logger::Log(LogLevel::Error, __FILE__, __LINE__, __FUNCTION__, __VA_ARGS__)

} // namespace xe 