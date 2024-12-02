cmake_minimum_required(VERSION 3.20)

project(qq)

# import google test module
enable_testing()
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

# set compilation flags
include(etc/cflags.cmake)

add_subdirectory(src)

add_executable(qq main.cpp)
target_link_libraries(qq PRIVATE run_app)

add_subdirectory(test)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)