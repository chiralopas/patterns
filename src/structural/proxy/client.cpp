/**
 * The Problem: we have an object whose initialization is costly but
 * we don't need its functionality all the times
 *
 * Proxy Pattern: provides a placeholder for another object in order to
 * provide access to it.
 *
 * Note: this is just one type of proxy pattern while there can be more like
 * remote, virtual or protection proxy where we want to do different thing with
 * same intent which is to have a placeholder to access another object.
 */

#include <iostream>
#include "proxy_parser.h"


void process_steps(IBookParser* parser)
{
    std::cout << "Press 1: To read book" << "\n";
    std::cout << "Press 2: To skip reading" << "\n";

    int input = 0;
    std::cin >> input;
    if (input == 1)
    {
        std::cout << "Book Reading Started!" << "\n";

        int count = parser->count_lines();
        std::cout << "number of lines: " << count;
    }
    else
        std::cout << "Continue to next steps!";

    std::cout << "\n";
}

int main()
{
    std::string path = std::string(PROJECT_DIR) + "/book.txt";
    ProxyParser parser(path);
    process_steps(&parser);
    return 0;
}
