#include "book_parser.h"


BookParser::BookParser(const std::string& path)
{
    std::cout << "entering a heavy operation" << "\n";
    stream_ = std::ifstream(path);
    if (!stream_)
        std::cout << "File not Found !" << "\n";
}

int BookParser::count_lines()
{
    int count = 0;
    std::string line;

    stream_.clear();
    stream_.seekg(0);
    while (std::getline(stream_, line))
        ++count;

    return count;
}
