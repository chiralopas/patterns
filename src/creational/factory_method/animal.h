#pragma once
#include <string>


class IAnimal
{
protected:
    std::string sound_;

public:
    virtual ~IAnimal() = default;
    virtual std::string sound() = 0;
};


class Cat : public IAnimal
{
public:
    std::string sound() override;
};


class Dog : public IAnimal
{
public:
    std::string sound() override;
};
