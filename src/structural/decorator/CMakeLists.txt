cmake_minimum_required(VERSION 3.10)

project(decorator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    beverage.h
    beverage.cpp
    beverage_decorator.h
    beverage_decorator.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
