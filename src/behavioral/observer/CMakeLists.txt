cmake_minimum_required(VERSION 3.10)

project(observer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    observable.h
    observable.cpp
    observer.h
    observer.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
