#pragma once
#include <string>
#include "resource.h"


/**
 * @brief [Abstraction] This will provide a way to expose the implementations
 * in multiple ways without going into to details on how they are implemented
 */
class IView
{
protected:
    IResource& resource_;

public:
    IView(IResource& resource);
    virtual ~IView() = default;
    virtual std::string show() = 0;
};


class LongView : public IView
{
public:
    LongView(IResource& resource);
    std::string show() override;
};


class ShortView : public IView
{
public:
    ShortView(IResource& resource);
    std::string show() override;
};


class ClassicView : public IView
{
public:
    ClassicView(IResource& resource);
    std::string show() override;
};
