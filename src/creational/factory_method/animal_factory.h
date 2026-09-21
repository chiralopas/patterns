#pragma once
#include "animal.h"


enum class Person
{
    None,
    CatPerson,
    DogPerson
};


class IAnimalFactory
{
protected:
    IAnimal* animal_;
    void cleanup();

public:
    IAnimalFactory();
    virtual ~IAnimalFactory();

    virtual IAnimal* create() = 0;
};


class InputBasedFactory : public IAnimalFactory
{
public:
    IAnimal* create() override;
};


class RandomFactory : public IAnimalFactory
{
public:
    RandomFactory();
    IAnimal* create() override;
};


class PersonBasedFactory : public IAnimalFactory
{
private:
    Person person_type_;

public:
    PersonBasedFactory();
    PersonBasedFactory(Person person_type);

    IAnimal* create() override;
};
