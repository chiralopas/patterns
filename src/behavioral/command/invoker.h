#pragma once
#include "command.h"


class Invoker
{
private:
    ICommand* command_;

public:
    Invoker(ICommand* command);

    void invoke();
    void undo();
};
