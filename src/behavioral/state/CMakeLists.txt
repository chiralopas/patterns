cmake_minimum_required(VERSION 3.10)

project(state)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    gate.h
    gate.cpp
    gate_state.h
    gate_state.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
