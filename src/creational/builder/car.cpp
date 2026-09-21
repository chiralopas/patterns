#include "car.h"


Car::Car()
    : wheel(nullptr),
      engine(nullptr),
      shape(nullptr)
{
}

Car::~Car()
{
    delete wheel;
    delete engine;
    delete shape;
}
