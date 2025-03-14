#pragma once

#include <string>
#include <fmt/format.h>

enum class LogLevel {
    Debug,
    Info,
    Warning,
    Error
};

class Logger {
public:
    static void Init();
    static void Shutdown();

    template<typename... Args>
    static void Debug(const std::string& format, Args&&... args) {
        Log(LogLevel::Debug, format, std::forward<Args>(args)...);
    }

    template<typename... Args>
    static void Info(const std::string& format, Args&&... args) {
        Log(LogLevel::Info, format, std::forward<Args>(args)...);
    }

    template<typename... Args>
    static void Warning(const std::string& format, Args&&... args) {
        Log(LogLevel::Warning, format, std::forward<Args>(args)...);
    }

    template<typename... Args>
    static void Error(const std::string& format, Args&&... args) {
        Log(LogLevel::Error, format, std::forward<Args>(args)...);
    }

private:
    template<typename... Args>
    static void Log(LogLevel level, const std::string& format, Args&&... args) {
        const char* level_str = "";
        switch (level) {
            case LogLevel::Debug:   level_str = "DEBUG"; break;
            case LogLevel::Info:    level_str = "INFO"; break;
            case LogLevel::Warning: level_str = "WARNING"; break;
            case LogLevel::Error:   level_str = "ERROR"; break;
        }

        std::string message = fmt::format(format, std::forward<Args>(args)...);
        fmt::print("[{}] {}\n", level_str, message);
    }
}; 