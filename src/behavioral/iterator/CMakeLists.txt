cmake_minimum_required(VERSION 3.10)

project(iterator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    inventory.h
    inventory.cpp
    inventory_iterator.h
    inventory_iterator.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
