#include "inventory_iterator.h"

// complete definitions
#include "inventory.h"


// IInventoryIterator
IInventoryIterator::IInventoryIterator()
    : current_(0)
{
}

void IInventoryIterator::reset()
{
    current_ = 0;
}


// HandheldIterator
HandheldIterator::HandheldIterator(HandheldInventory* inventory)
    : inventory_(inventory)
{
}

bool HandheldIterator::has_next()
{
    return current_ < MAX_ITEMS && inventory_->weapons[current_] != -1;
}

void HandheldIterator::jump_next()
{
    ++current_;
}

int HandheldIterator::current()
{
    return inventory_->weapons[current_];
}


// HouseIterator
HouseIterator::HouseIterator(HouseInventory* inventory)
    : inventory_(inventory)
{
}

bool HouseIterator::has_next()
{
    return current_ < inventory_->furniture.size();
}

void HouseIterator::jump_next()
{
    ++current_;
}

int HouseIterator::current()
{
    return inventory_->furniture[current_];
}
