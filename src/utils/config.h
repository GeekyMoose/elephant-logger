#pragma once

#include <experimental/filesystem> // For tmp path


// Mostly for internal configuration

namespace fs = std::experimental::filesystem;
#define ELEPHANT_CONFIG_TMP_PATH fs::temp_directory_path().c_str()


namespace elephantlogger {

enum : bool {
    DEFAULT_CLEAR_AT_START = true
};

enum : int {
    THREAD_UPDATE_RATE      = 250,
    NB_CHANNELS             = 10,
    DEFAULT_QUEUE_SIZE      = 40,
    DEFAULT_LOGLEVEL        = static_cast<int>(elephantlogger::LogLevel::Debug)
};


} // End namespace