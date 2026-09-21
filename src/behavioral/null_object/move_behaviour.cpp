#include "move_behaviour.h"
#include <iostream>


// NormalMove
NormalMove::NormalMove()
{
    right_ = 1.0;
    left_ = 1.0;
    crouch_ = false;
    jump_ = false;
}

void NormalMove::on_right()
{
    std::cout << "move right\n";
}

void NormalMove::on_left()
{
    std::cout << "move left\n";
}

void NormalMove::on_crouch()
{
    crouch_ = true;
    std::cout << "crouch is enabled\n";
}

void NormalMove::on_jump()
{
    jump_ = true;
    std::cout << "jump is enabled\n";
}


// NoMove
NoMove::NoMove()
{
    right_ = 0.0;
    left_ = 0.0;
    crouch_ = false;
    jump_ = false;
}

void NoMove::on_right()
{
    std::cout << "right movement is disabled\n";
}

void NoMove::on_left()
{
    std::cout << "left movement is disabled\n";
}

void NoMove::on_crouch()
{
    std::cout << "crouch is disabled\n";
}

void NoMove::on_jump()
{
    std::cout << "jump is disabled\n";
}
