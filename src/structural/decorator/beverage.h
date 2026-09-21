#pragma once


class IBeverage
{
public:
    virtual ~IBeverage() = default;

    /**
     * @brief we don't want to change it
     */
    virtual int cost() = 0;
};


class Espresso : public IBeverage
{
public:
    int cost() override;
};


class Latte : public IBeverage
{
public:
    int cost() override;
};
