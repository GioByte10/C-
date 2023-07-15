cmake_minimum_required(VERSION 3.24)
project(setAlarm)

set(CMAKE_CXX_STANDARD 20)

add_executable(alm main.cpp)
target_link_libraries(alm PRIVATE winmm)
set_target_properties(alm PROPERTIES LINK_FLAGS "-static -mwindows")

add_executable(test test.cpp)