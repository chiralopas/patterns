/**
 * @file book_parser.h
 * treat this file as closed for modification as it might be a third party library
 */

#pragma once
#include <string>
#include <fstream>
#include <iostream>


class IBookParser
{
protected:
    std::ifstream stream_;

public:
    virtual ~IBookParser() = default;
    virtual int count_lines() = 0;
};


class BookParser : public IBookParser
{
public:
    /**
     * @brief this will be costly method.
     * we don't want this prematurely as it might be just sitting there doing nothing
     */
    BookParser(const std::string& path);

    /**
     * @brief this is the cheap method.
     * we need costly constructor only when we need to call this method
     */
    int count_lines() override;
};
