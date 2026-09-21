#include "abstract_factory.h"


// IAbstractFactory
IAbstractFactory::IAbstractFactory()
    : button_(nullptr),
      dialog_(nullptr)
{
}

IAbstractFactory::~IAbstractFactory()
{
    delete button_;
    delete dialog_;
}


// WinFactory
IButton* WinFactory::create_button()
{
    if (button_ == nullptr)
        button_ = new WinButton();

    return button_;
}

IDialog* WinFactory::create_dialog()
{
    if (dialog_ == nullptr)
        dialog_ = new WinDialog();

    return dialog_;
}


// MacFactory
IButton* MacFactory::create_button()
{
    if (button_ == nullptr)
        button_ = new MacButton();

    return button_;
}

IDialog* MacFactory::create_dialog()
{
    if (dialog_ == nullptr)
        dialog_ = new MacDialog();

    return dialog_;
}
