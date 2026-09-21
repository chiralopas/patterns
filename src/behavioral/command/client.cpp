/**
 * The Problem: when we want to decouple operation from actual object which does that.
 *
 * The Command pattern: it encapsulates a request as an object, thereby letting you to
 * parameterize other objects with different requests, queue or log-request and support
 * multiple operations.
 */

#include "invoker.h"

#define LIGHT 1
#define FAN 0


// client code we don't want to change
void controller(ICommand* command)
{
    Invoker invoker(command);
    invoker.invoke();
}

int main()
{
#if LIGHT
    LightCommand light_command;
    controller(&light_command);
#endif

#if FAN
    FanCommand fan_command;
    controller(&fan_command);
#endif

    return 0;
}
