#include "stdafx.h"
#include "os/logger.h"

namespace os {
    void init() {
        xe::Logger::Initialize();
    }
    
    void shutdown() {
        xe::Logger::Shutdown();
    }
} 