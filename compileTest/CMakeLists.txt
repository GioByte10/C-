cmake_minimum_required(VERSION 3.24)
project(compileTest)

set(CMAKE_CXX_STANDARD 20)

add_executable(compileTest main.cpp useful.h useful.cpp)
set_target_properties(compileTest PROPERTIES LINK_FLAGS "-static")
