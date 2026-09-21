cmake_minimum_required(VERSION 3.10)

project(factory_method)

set(CMAKE_CXX_STANDARD 11)

set(SOURCES
    client.cpp
    animal.h
    animal.cpp
    animal_factory.h
    animal_factory.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
