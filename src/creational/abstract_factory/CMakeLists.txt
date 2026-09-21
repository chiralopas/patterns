cmake_minimum_required(VERSION 3.10)

project(abstract_factory)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    button.h
    button.cpp
    dialog.h
    dialog.cpp
    abstract_factory.h
    abstract_factory.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
