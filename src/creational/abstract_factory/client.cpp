/**
 * The Problem: we want to create objects in sets.
 *
 * Abstract Factory pattern: define an interface for creating families of
 * related or dependent objects without specifying their concrete class.
 */

#include <iostream>
#include "abstract_factory.h"

#define WIN 1
#define MAC 0


void complex_code(IAbstractFactory* factory)
{
    IButton* button = factory->create_button();
    IDialog* dialog = factory->create_dialog();

    std::cout << button->metadata() << "\n";
    std::cout << dialog->metadata() << "\n";
}

int main()
{
#if WIN
    WinFactory win_factory;
    complex_code(&win_factory);
#endif

#if MAC
    MacFactory mac_factory;
    complex_code(&mac_factory);
#endif

    return 0;
}
