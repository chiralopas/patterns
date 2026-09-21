#pragma once
#include <cstddef>

// forward declarations
class HandheldInventory;
class HouseInventory;


class IInventoryIterator
{
protected:
    size_t current_;

public:
    IInventoryIterator();
    virtual ~IInventoryIterator() = default;

    void reset();

    virtual bool has_next() = 0;
    virtual void jump_next() = 0;
    virtual int current() = 0;
};


class HandheldIterator : public IInventoryIterator
{
private:
    HandheldInventory* inventory_;

public:
    HandheldIterator(HandheldInventory* inventory);

    bool has_next() override;
    void jump_next() override;
    int current() override;
};


class HouseIterator : public IInventoryIterator
{
private:
    HouseInventory* inventory_;

public:
    HouseIterator(HouseInventory* inventory);

    bool has_next() override;
    void jump_next() override;
    int current() override;
};
