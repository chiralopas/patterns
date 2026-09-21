/**
 * The Problem: we want to use an algorithm but some pieces of that algorithm can vary
 * depending upon the concretions. how to implement such thing?
 *
 * Template Method pattern: it let you defines the skeleton of an algorithm and allow
 * subclasses to redefine certain steps of an algorithm without changing its structure
 *
 * Note: its based on abstract class and it contract with child classes but here we also
 * impose having an algorithm which should be exposed (public) while steps to implement
 * can be hidden (private)
*/

#include <iostream>
#include "document.h"


int main()
{
    TextDocument text_document;
    auto document = text_document.open("blah");
    std::cout << document << "\n";

    return 0;
}
