#include "invoker.h"


Invoker::Invoker(ICommand* command)
    : command_(command)
{
}

void Invoker::invoke()
{
    command_->execute();
}

void Invoker::undo()
{
    command_->undo();
}
