#pragma once
#include <string>


class Wheel
{
public:
    std::string provider;
};


class Engine
{
public:
    std::string type;
};


class Shape
{
public:
    std::string design;
};


/**
 * @brief a complex type using many other types
 */
class Car
{
public:
    Wheel* wheel;
    Engine* engine;
    Shape* shape;

    Car();
    ~Car();
};
