#pragma once
#include "button.h"
#include "dialog.h"


class IAbstractFactory
{
protected:
    IButton* button_;
    IDialog* dialog_;

    IAbstractFactory();

public:
    virtual ~IAbstractFactory();

    virtual IButton* create_button() = 0;
    virtual IDialog* create_dialog() = 0;
};


class WinFactory : public IAbstractFactory
{
public:
    IButton* create_button() override;
    IDialog* create_dialog() override;
};


class MacFactory : public IAbstractFactory
{
public:
    IButton* create_button() override;
    IDialog* create_dialog() override;
};
