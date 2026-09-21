#include "box.h"


// Box
void Box::put(IBox* box)
{
    boxes_.emplace_back(box);
}

int Box::price()
{
    int addon_cost = 1;

    int total_price = addon_cost;
    for (auto& box : boxes_)
        total_price += box->price();

    return total_price;
}


// Product
int Product::price()
{
    int addon_cost = 5;

    // just to indicate different implementation
    return addon_cost;
}
