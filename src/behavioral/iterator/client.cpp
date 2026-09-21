/**
 * The Problem: how to iterate over items in a container independent of
 * which type of container(array, vector) used?
 *
 * The Iterator pattern: it provides a way to access element of an
 * aggregate object sequentially without exposing the underline representation.
 *
 * Note: here item can be of different type as well but we need to use template
 * to achieve that.
*/

#include <iostream>
#include "inventory.h"

#define HANDHELD 1
#define HOUSE 0


void print_inventory(IInventory* inventory)
{
    auto iterator = inventory->get_iterator();
    while (iterator->has_next())
    {
        std::cout << iterator->current() << " ";
        iterator->jump_next();
    }
    std::cout << "\n";
}

int main()
{
#if HANDHELD
    HandheldInventory handheld_inventory;
    handheld_inventory.weapons[0] = 1;
    handheld_inventory.weapons[1] = 2;
    handheld_inventory.weapons[2] = 3;
    print_inventory(&handheld_inventory);
#endif

#if HOUSE
    HouseInventory house_inventory;
    house_inventory.furniture.push_back(1);
    house_inventory.furniture.push_back(2);
    house_inventory.furniture.push_back(3);
    print_inventory(&house_inventory);
#endif

    return 0;
}
