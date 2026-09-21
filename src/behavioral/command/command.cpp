#include "command.h"
#include <iostream>


// LightCommand
void LightCommand::execute()
{
    std::cout << "light on\n";
}

void LightCommand::undo()
{
    std::cout << "light off\n";
}


// FanCommand
void FanCommand::execute()
{
    std::cout << "fan on\n";
}

void FanCommand::undo()
{
    std::cout << "fan off\n";
}
