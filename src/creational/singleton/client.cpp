/**
 * The problem: we want to access single object throughout execution
 *
 * Singleton pattern: a class has only one instance and provide global point
 * of access to it.
 */

#include <iostream>
#include "leaderboard.h"


void check_points()
{
    Leaderboard* board = Leaderboard::get_instance();
    board->set_top("chiral");
}

int main()
{
    Leaderboard* board = Leaderboard::get_instance();
    board->set_top("vishal");
    std::cout << "update points\n";
    check_points();

    return 0;
}
