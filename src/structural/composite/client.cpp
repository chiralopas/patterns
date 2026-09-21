/**
 * The Problem: we have a tree like structure and there is one operation
 * we want to do without having Conditional statements(if else) when iterating
 * over nodes to determine if node is composite node or leaf node.
 *
 * Composite pattern: it composes object into tree structure to represent
 * part whole hierarchy. composite let clients treat individual objects and
 * composition of objects uniformly.
 *
 * Note: this is classic example of "Replace Conditional with Polymorphism".
 */

#include <iostream>
#include "box.h"


int main()
{
    Box box1;
    Product product1;
    box1.put(&product1);

    Box box2;
    Product product2;
    Product product3;
    box2.put(&box1);
    box2.put(&product2);
    box2.put(&product3);

    int total = box2.price();
    std::cout << "Total Price: " << total << "\n";

    return 0;
}
