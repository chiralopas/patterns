cmake_minimum_required(VERSION 3.10)

project(composite)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    box.h
    box.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
