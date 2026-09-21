cmake_minimum_required(VERSION 3.10)

project(singleton)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    leaderboard.h
    leaderboard.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
