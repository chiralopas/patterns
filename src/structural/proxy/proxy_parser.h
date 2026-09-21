#pragma once
#include "book_parser.h"


class ProxyParser : public IBookParser
{
private:
    std::string path_;
    BookParser* parser_;

public:
    explicit ProxyParser(const std::string& path);
    ~ProxyParser() override;

    int count_lines() override;
};
