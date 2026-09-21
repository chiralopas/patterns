cmake_minimum_required(VERSION 3.10)

project(bridge)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    resource.h
    resource.cpp
    view.h
    view.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
