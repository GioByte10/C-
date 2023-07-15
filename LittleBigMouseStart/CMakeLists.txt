cmake_minimum_required(VERSION 3.24)
project(LittleBigMouseStart)

set(CMAKE_CXX_STANDARD 20)

add_executable(LittleBigMouseStart main.cpp)
target_link_libraries(LittleBigMouseStart wlanapi.lib)

add_executable(start start.cpp)