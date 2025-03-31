#pragma once

#include <string>
#include <spdlog/spdlog.h>

namespace xe {

class Logger {
public:
    static void Initialize();
    static void Shutdown();
    
    static void Info(const std::string& message);
    static void Warning(const std::string& message);
    static void Error(const std::string& message);
    static void Debug(const std::string& message);
    
private:
    static std::shared_ptr<spdlog::logger> s_logger;
    static bool s_initialized;
};

} // namespace xe 