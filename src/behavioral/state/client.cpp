/**
 * The Problem: we just want to build a state machine in object oriented manner
 *
 * State pattern: it allows an object to alter its behaviour when its internal
 * state changes, the object will appear to change its class.
*/

#include "gate.h"


int main()
{
    Gate gate;
    gate.on_pay_ok();
    gate.on_enter();
    gate.on_enter();

    return 0;
}
