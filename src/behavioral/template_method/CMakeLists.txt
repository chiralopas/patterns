cmake_minimum_required(VERSION 3.10)

project(template_method)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    document.h
    document.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
