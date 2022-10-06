cmake_minimum_required(VERSION 3.23)
project(ClassSuppress)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static -mwindows")

add_executable(ClassSuppress main.cpp)
add_executable(test cmake-build-debug/test.cpp)