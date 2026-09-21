#pragma once
#include <string>


class IDialog
{
public:
    virtual ~IDialog() = default;
    virtual std::string metadata() = 0;
};


class WinDialog : public IDialog
{
public:
    std::string metadata() override;
};


class MacDialog : public IDialog
{
public:
    std::string metadata() override;
};
