#include "animal.h"


std::string Cat::sound()
{
    sound_ = "meow";
    return sound_;
}


std::string Dog::sound()
{
    sound_ = "bhow";
    return sound_;
}
