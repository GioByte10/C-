cmake_minimum_required(VERSION 3.22)
project(CheckBatteryLevel)

set(CMAKE_CXX_STANDARD 20)

add_executable(CheckBatteryLevel main.cpp)
add_executable(test test.cpp)

set_target_properties(CheckBatteryLevel PROPERTIES LINK_FLAGS "-static -mwindows")