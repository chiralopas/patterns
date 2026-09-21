cmake_minimum_required(VERSION 3.10)

project(strategy)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    duck.h
    duck.cpp
    fly_behaviour.h
    fly_behaviour.cpp
    quack_behaviour.h
    quack_behaviour.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
