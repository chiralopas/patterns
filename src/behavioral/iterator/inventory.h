#pragma once
#include "inventory_iterator.h"
#include <vector>

constexpr int MAX_ITEMS = 100;


class IInventory
{
protected:
    IInventoryIterator* iterator_;
    IInventory();

public:
    virtual ~IInventory();
    virtual IInventoryIterator* get_iterator() = 0;
};


class HandheldInventory : public IInventory
{
public:
    HandheldInventory();

    // collection of items
    int weapons[MAX_ITEMS];
    IInventoryIterator* get_iterator() override;
};


class HouseInventory : public IInventory
{
public:
    HouseInventory();

    // collection of items
    std::vector<int> furniture;
    IInventoryIterator* get_iterator() override;
};
