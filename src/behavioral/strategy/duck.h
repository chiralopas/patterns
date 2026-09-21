#pragma once
#include "quack_behaviour.h"
#include "fly_behaviour.h"


class Duck
{
private:
    IQuackBehaviour* quack_;
    IFlyBehaviour* fly_;

public:
    Duck(IQuackBehaviour* quack, IFlyBehaviour* fly);
    ~Duck();

    void quack();
    void fly();
};
