cmake_minimum_required(VERSION 4.2)
project(SystemAlarm)

set(CMAKE_CXX_STANDARD 20)

add_executable(SystemAlarm main.cpp
        SystemAlarm.cpp
        SystemAlarm.h)
