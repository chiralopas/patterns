/**
 * The Problem: we have an object which provides a certain functionality but
 * we want additional functionality without changing the existing one.
 * also what if we need multiple functionalities from same object?
 *
 * Decorator pattern: it attaches the additional responsibility to one object
 * dynamically. decorator provides an alternative sub-classing for extending
 * functionality.
 *
 * Note: decorator must be based on something which already exists,
 * they can't exist by themselves
 */

#include <iostream>
#include "beverage_decorator.h"


int main()
{
    IBeverage* beverage = new Latte();
    std::cout << "raw latte cost: " << beverage->cost() << "\n";

    // we can decorate the base object to extend its functionality at run time
    beverage = new ChocolateDecorator(beverage);
    std::cout << "chocolate latte cost: " << beverage->cost() << "\n";

    // we can surely have multiple decorators at the same time
    beverage = new MochaDecorator(beverage);
    std::cout << "mocha chocolate latte cost: " << beverage->cost() << "\n";

    delete beverage;
    return 0;
}
