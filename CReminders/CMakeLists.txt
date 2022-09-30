cmake_minimum_required(VERSION 3.22)
project (CReminders)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")

set(SOURCE_FILES header.h)

add_executable(CReminders main.cpp)
add_executable(test test.cpp)
add_executable(test2 test2.cpp)
add_executable(test3 test3.cpp)
add_executable(test4 test4.cpp)
add_executable(commands commands.cpp)