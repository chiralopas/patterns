#include "fly_behaviour.h"
#include <iostream>


void NormalFly::fly()
{
    std::cout << "flap flap!\n";
}


void HighFly::fly()
{
    std::cout << "high fly!\n";
}


void NoFly::fly()
{
    std::cout << "can't fly!\n";
}
