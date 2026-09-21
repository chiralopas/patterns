/**
 * The Problem: there are scenarios where we need to check nulls for multiple properties,
 * and doing it every time will be tedious if the same condition occurs again and again.
 *
 * Null Object pattern: this helps us creating an object with no referenced value or with
 * defined neutral (null) behavior.
*/

#include <iostream>
#include "move_behaviour.h"

#define NORMAL_MOVEMENT 1
#define NO_MOVEMENT 0


void take_input(IMoveBehaviour* behaviour)
{
    std::cout << "provide inputs to move:\n";
    while (true)
    {
        int input = std::cin.get() - '0';
        if (input == 0)
            break;

        switch (input)
        {
        case 1:
            behaviour->on_right();
            break;
        case 2:
            behaviour->on_left();
            break;
        case 3:
            behaviour->on_crouch();
            break;
        case 4:
            behaviour->on_jump();
            break;

        default:
            break;
        }
    }
}

int main()
{
#if NORMAL_MOVEMENT
    NormalMove normal_move;
    take_input(&normal_move);
#elif NO_MOVEMENT
    NoMove no_move;
    take_input(&no_move);
#endif

    return 0;
}
