/**
 * The Problem: at some point in a method, we need a particular object
 * but we don't know the exact object in the start of that method.
 *
 * Factory Method pattern: define an interface for creating an object,
 * but let subclass decide which class to instantiate.
 */

#include <iostream>
#include "animal_factory.h"

#define INPUT_BASED 1
#define RANDOM_ANIMAL 0
#define PERSON_BASED 0


// client code closed for modification
void complex_code(IAnimalFactory* factory)
{
    // assume here's a lot of tightly coupled code
    IAnimal* animal = factory->create();
    if (animal != nullptr)
        std::cout << "makes sound: " << animal->sound() << "\n";
}

int main()
{
#if INPUT_BASED
    InputBasedFactory input_based;
    complex_code(&input_based);
#endif

#if RANDOM_ANIMAL
    RandomFactory random_animal;
    complex_code(&random_animal);
#endif

#if PERSON_BASED
    PersonBasedFactory person_based(Person::DogPerson);
    complex_code(&person_based);
#endif

    return 0;
}
