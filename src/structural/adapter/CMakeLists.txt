cmake_minimum_required(VERSION 3.10)

project(adapter)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    analytics.h
    analytics.cpp
    monitor.h
    monitor.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
