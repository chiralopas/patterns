#include "document.h"


// IDocument
/**
 * @brief Template Method: algorithm followed by every concretion
 */
std::string IDocument::open(const std::string& name)
{
    std::string document;

    // first check if document already exists with same name
    document = can_open(name);
    if (!document.empty())
        return document;

    document = create();
    return document;
}


// TextDocument
std::string TextDocument::can_open(const std::string& name)
{
    // check text document with same name on current path
    // let's say it exists
    return "existing text document";
}

std::string TextDocument::create()
{
    return "fresh text document";
}


// WordDocument
std::string WordDocument::can_open(const std::string& name)
{
    // check word document with same name on current path
    // let's say it exists
    return "existing word document";
}

std::string WordDocument::create()
{
    return "fresh word document";
}
