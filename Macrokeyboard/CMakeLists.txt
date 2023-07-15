cmake_minimum_required(VERSION 3.24)
project(Macrokeyboard)

set(CMAKE_CXX_STANDARD 20)

add_executable(Macrokeyboard main.cpp SerialClass.h Serial.cpp)
