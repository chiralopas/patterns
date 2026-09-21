cmake_minimum_required(VERSION 3.10)

project(null_object)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    move_behaviour.h
    move_behaviour.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
