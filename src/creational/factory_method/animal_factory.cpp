#include "animal_factory.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


// IAnimalFactory
IAnimalFactory::IAnimalFactory()
    : animal_(nullptr)
{
}

IAnimalFactory::~IAnimalFactory()
{
    cleanup();
}

void IAnimalFactory::cleanup()
{
    if (animal_ != nullptr)
    {
        delete animal_;
        animal_ = nullptr;
    }
}


// InputBasedFactory
IAnimal* InputBasedFactory::create()
{
    cleanup();

    std::cout << "Enter 1: Cat, 2: Dog\n";

    int input = 0;
    std::cin >> input;

    if (input == 1)
        animal_ = new Cat();
    else if (input == 2)
        animal_ = new Dog();

    return animal_;
}


// RandomFactory
RandomFactory::RandomFactory()
{
    srand((unsigned)time(nullptr));
}

IAnimal* RandomFactory::create()
{
    cleanup();

    if (rand() % 2 == 0)
        animal_ = new Cat();
    else
        animal_ = new Dog();

    return animal_;
}


// PersonBasedFactory
PersonBasedFactory::PersonBasedFactory()
    : person_type_(Person::None)
{
}

PersonBasedFactory::PersonBasedFactory(Person person_type)
    : person_type_(person_type)
{
}

IAnimal* PersonBasedFactory::create()
{
    cleanup();

    if (person_type_ == Person::CatPerson)
        animal_ = new Cat();
    else if (person_type_ == Person::DogPerson)
        animal_ = new Dog();
    return animal_;
}
