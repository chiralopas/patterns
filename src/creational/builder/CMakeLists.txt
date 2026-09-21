cmake_minimum_required(VERSION 3.10)

project(builder)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    car.h
    car.cpp
    car_builder.h
    car_builder.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
