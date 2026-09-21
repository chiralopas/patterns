cmake_minimum_required(VERSION 3.10)

project(flyweight)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    tree.h
    tree.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
