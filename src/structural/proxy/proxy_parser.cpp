#include "proxy_parser.h"


ProxyParser::ProxyParser(const std::string& path)
    : path_(path), parser_(nullptr)
{
}

ProxyParser::~ProxyParser()
{
    delete parser_;
}

int ProxyParser::count_lines()
{
    // we only want to construct the costly part when we actually need it, because
    // there can be cases when we instantiate BookParser but don't call count_lines
    if (parser_ == nullptr)
        parser_ = new BookParser(path_);

    return parser_->count_lines();
}
