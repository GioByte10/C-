cmake_minimum_required(VERSION 3.22)
project (CReminders)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS -static)

add_executable(CReminders main.cpp)
add_executable(test test.cpp)