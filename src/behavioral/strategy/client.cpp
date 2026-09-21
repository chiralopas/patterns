/**
 * The Problem: we have multiple variants of a type and some variants have
 * the exact same behaviour(algorithm), thus using inheritance will duplicate the
 * behaviour in some variants(children).
 *
 * Strategy pattern: it defines families of algorithms, encapsulating each one of them
 * and make them interchangeable. strategy let the algorithm vary independently from
 * the client that uses them.
 *
 * Note: this is classic example of using composition over inheritance.
 */

#include <iostream>
#include "duck.h"

#define MOUNTAIN 1
#define WOUNDED 0


int main()
{
#if MOUNTAIN
    Duck mountain_duck(new NormalQuack(), new HighFly());
    std::cout << "mountain duck: \n";
    mountain_duck.quack();
    mountain_duck.fly();
#endif

#if WOUNDED
    Duck wounded_duck(new IntenseQuack(), new NoFly());
    std::cout << "wounded duck: \n";
    wounded_duck.quack();
    wounded_duck.fly();
#endif

    return 0;
}
