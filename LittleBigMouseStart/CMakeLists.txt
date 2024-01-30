cmake_minimum_required(VERSION 3.24)
project(LittleBigMouseStart)

set(CMAKE_CXX_STANDARD 20)

add_executable(LittleBigMouseStart main.cpp)
target_link_libraries(LittleBigMouseStart wlanapi.lib)
set_target_properties(LittleBigMouseStart PROPERTIES LINK_FLAGS "-static -mwindows")

add_executable(start start.cpp)
set_target_properties(start PROPERTIES LINK_FLAGS "-static -mwindows")
