cmake_minimum_required(VERSION 3.10)

project(proxy)

set(CMAKE_CXX_STANDARD 11)
add_definitions(-DPROJECT_DIR="${CMAKE_CURRENT_SOURCE_DIR}")

set(SOURCES
    client.cpp
    book_parser.h
    book_parser.cpp
    proxy_parser.h
    proxy_parser.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})
