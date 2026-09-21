#include "inventory.h"
#include <algorithm>


// IInventory
IInventory::IInventory()
    : iterator_(nullptr)
{
}

IInventory::~IInventory()
{
    delete iterator_;
}


// HandheldInventory
HandheldInventory::HandheldInventory()
{
    iterator_ = new HandheldIterator(this);
    std::fill_n(weapons, MAX_ITEMS, -1);
}

IInventoryIterator* HandheldInventory::get_iterator()
{
    iterator_->reset();
    return iterator_;
}


// HouseInventory
HouseInventory::HouseInventory()
{
    iterator_ = new HouseIterator(this);
}

IInventoryIterator* HouseInventory::get_iterator()
{
    iterator_->reset();
    return iterator_;
}
