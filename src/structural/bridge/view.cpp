#include "view.h"
#include <iostream>
#include <sstream>


IView::IView(IResource& resource)
    : resource_(resource)
{
}


// LongView
LongView::LongView(IResource& resource)
    : IView(resource)
{
}

std::string LongView::show()
{
    std::stringstream text;
    text << "Long:"
        << "\n--------------------\n"
        << resource_.summary()
        << "\n--------------------\n"
        << resource_.image()
        << "\n--------------------\n"
        << resource_.title();
    return text.str();
}


// ShortView
ShortView::ShortView(IResource& resource)
    : IView(resource)
{
}

std::string ShortView::show()
{
    std::stringstream text;
    text << "Short:"
        << "\n"
        << resource_.title();
    return text.str();
}


// ClassicView
ClassicView::ClassicView(IResource& resource)
    : IView(resource)
{
}

std::string ClassicView::show()
{
    std::stringstream text;
    text << "Classic:"
        << "\n"
        << resource_.summary()
        << "\n"
        << resource_.image()
        << "\n"
        << resource_.title();
    return text.str();
}
