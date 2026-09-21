#pragma once
#include <string>


class IButton
{
public:
    virtual ~IButton() = default;
    virtual std::string metadata() = 0;
};


class WinButton : public IButton
{
public:
    std::string metadata() override;
};


class MacButton : public IButton
{
public:
    std::string metadata() override;
};
