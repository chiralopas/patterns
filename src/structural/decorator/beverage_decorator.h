#pragma once
#include "beverage.h"


class IBeverageDecorator : public IBeverage
{
protected:
    IBeverage* beverage_;

public:
    IBeverageDecorator(IBeverage* beverage);
    ~IBeverageDecorator() override;
};


class ChocolateDecorator : public IBeverageDecorator
{
public:
    ChocolateDecorator(IBeverage* beverage);

    /**
     * @brief this will let us have additional functionality in run time
     */
    int cost() override;
};


class MochaDecorator : public IBeverageDecorator
{
public:
    MochaDecorator(IBeverage* beverage);

    /**
     * @brief this will let us have additional functionality in run time
     */
    int cost() override;
};
