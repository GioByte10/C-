cmake_minimum_required(VERSION 3.23)
project(SilentStart)

set(CMAKE_CXX_STANDARD 20)

add_executable(SilentStart main.cpp)
set_target_properties(SilentStart PROPERTIES LINK_FLAGS "-static -mwindows")

add_executable(test test.cpp)
