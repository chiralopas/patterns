#pragma once
#include "gate_state.h"


class Gate
{
private:
    IGateState* state_;

public:
    Gate();
    ~Gate();

    void on_enter();
    void on_pay_ok();
    void on_pay_failed();
    void change_state(IGateState* state);
};
