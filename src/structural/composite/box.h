#pragma once
#include <vector>


class IBox
{
public:
    virtual ~IBox() = default;
    virtual int price() = 0;
};


class Box : public IBox
{
private:
    std::vector<IBox*> boxes_;

public:
    void put(IBox* box);
    int price() override;
};


class Product : public IBox
{
public:
    int price() override;
};
