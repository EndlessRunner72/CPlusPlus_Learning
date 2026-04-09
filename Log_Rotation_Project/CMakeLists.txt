cmake_minimum_required(VERSION 3.12)
project(LogRotationEngine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# 1. Manually find the threads library
find_package(Threads REQUIRED)

# 2. Manually find zip headers and library to bypass the broken config
find_path(ZIP_INCLUDE_DIR zip.h)
find_library(ZIP_LIBRARY zip)

add_executable(log_manager log_generator.cpp)

# 3. Link everything manually
target_include_directories(log_manager PRIVATE ${ZIP_INCLUDE_DIR})
target_link_libraries(log_manager PRIVATE ${ZIP_LIBRARY} Threads::Threads)