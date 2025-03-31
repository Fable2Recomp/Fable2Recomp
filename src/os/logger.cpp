#include "stdafx.h"
#include "os/logger.h"
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/rotating_file_sink.h>

namespace xe {

std::shared_ptr<spdlog::logger> Logger::s_logger;
bool Logger::s_initialized = false;

void Logger::Initialize() {
    if (s_initialized) return;
    
    try {
        // Create console sink
        auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
        console_sink->set_level(spdlog::level::debug);
        
        // Create file sink
        auto file_sink = std::make_shared<spdlog::sinks::rotating_file_sink_mt>(
            "logs/fable2recomp.log", 1024 * 1024 * 5, 3);
        file_sink->set_level(spdlog::level::trace);
        
        // Create logger with both sinks
        s_logger = std::make_shared<spdlog::logger>("Fable2Recomp", 
            spdlog::sinks_init_list{console_sink, file_sink});
        
        // Set global logging level
        s_logger->set_level(spdlog::level::debug);
        
        s_initialized = true;
        spdlog::info("Logger initialized");
    } catch (const spdlog::spdlog_ex& ex) {
        std::cerr << "Logger initialization failed: " << ex.what() << std::endl;
    }
}

void Logger::Shutdown() {
    if (!s_initialized) return;
    
    s_logger->flush();
    s_logger.reset();
    s_initialized = false;
}

void Logger::Info(const std::string& message) {
    if (!s_initialized) return;
    s_logger->info(message);
}

void Logger::Warning(const std::string& message) {
    if (!s_initialized) return;
    s_logger->warn(message);
}

void Logger::Error(const std::string& message) {
    if (!s_initialized) return;
    s_logger->error(message);
}

void Logger::Debug(const std::string& message) {
    if (!s_initialized) return;
    s_logger->debug(message);
}

} // namespace xe 