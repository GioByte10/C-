cmake_minimum_required(VERSION 3.22)
project (CReminders)

set(CMAKE_CXX_STANDARD 20)

add_executable(CReminders main.cpp)

set_target_properties(CReminders PROPERTIES LINK_FLAGS "-static -mwindows")

add_executable(test test.cpp)
add_executable(test2 test2.cpp)
add_executable(test3 test3.cpp)
add_executable(test4 test4.cpp)
add_executable(commands commands.cpp)