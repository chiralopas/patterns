#include "leaderboard.h"
#include <iostream>


std::unique_ptr<Leaderboard> Leaderboard::instance_;

Leaderboard::Leaderboard()
    : top_()
{
}

Leaderboard* Leaderboard::get_instance()
{
    if (!instance_)
        instance_.reset(new Leaderboard());

    return instance_.get();
}

void Leaderboard::set_top(const std::string& top)
{
    top_ = top;
    std::cout << "at top: " << top_ << "\n";
}
