cmake_minimum_required(VERSION 3.10)

project(patterns)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory("src/behavioral/command")
add_subdirectory("src/behavioral/iterator")
add_subdirectory("src/behavioral/null_object")
add_subdirectory("src/behavioral/observer")
add_subdirectory("src/behavioral/state")
add_subdirectory("src/behavioral/strategy")
add_subdirectory("src/behavioral/template_method")

add_subdirectory("src/creational/abstract_factory")
add_subdirectory("src/creational/builder")
add_subdirectory("src/creational/factory_method")
add_subdirectory("src/creational/singleton")

add_subdirectory("src/structural/adapter")
add_subdirectory("src/structural/bridge")
add_subdirectory("src/structural/composite")
add_subdirectory("src/structural/decorator")
add_subdirectory("src/structural/flyweight")
add_subdirectory("src/structural/proxy")
