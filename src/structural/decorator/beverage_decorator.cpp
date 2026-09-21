#include "beverage_decorator.h"


// IBeverageDecorator
IBeverageDecorator::IBeverageDecorator(IBeverage* beverage)
    : beverage_(beverage)
{
}

IBeverageDecorator::~IBeverageDecorator()
{
    delete beverage_;
}


// ChocolateDecorator
ChocolateDecorator::ChocolateDecorator(IBeverage* beverage)
    : IBeverageDecorator(beverage)
{
}

int ChocolateDecorator::cost()
{
    int final_cost = beverage_->cost() + 2;
    return final_cost;
}


// MochaDecorator
MochaDecorator::MochaDecorator(IBeverage* beverage)
    : IBeverageDecorator(beverage)
{
}

int MochaDecorator::cost()
{
    // this operation can be different to other overridden methods
    int final_cost = beverage_->cost() + 3;
    return final_cost;
}
