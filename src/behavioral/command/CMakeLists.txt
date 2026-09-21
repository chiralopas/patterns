cmake_minimum_required(VERSION 3.10)

project(command)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    command.h
    command.cpp
    invoker.h
    invoker.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
