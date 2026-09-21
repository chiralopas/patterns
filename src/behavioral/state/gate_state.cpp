#include "gate_state.h"
#include "gate.h"
#include <iostream>


// IGateState
IGateState::IGateState(Gate* gate)
    : gate_(gate)
{
}


// OpenState
OpenState::OpenState(Gate* gate)
    : IGateState(gate)
{
}

void OpenState::enter()
{
    std::cout << "Someone passed: Gate got Closed!\n";
    gate_->change_state(new ClosedState(gate_));
}

void OpenState::pay_ok()
{
    std::cout << "Repeat payment: Gate still Open!\n";
}

void OpenState::pay_failed()
{
    std::cout << "Payment failed: Gate was already Open!\n";
}


// ClosedState
ClosedState::ClosedState(Gate* gate)
    : IGateState(gate)
{
}

void ClosedState::enter()
{
    std::cout << "Can't Enter: Gate is Closed!\n";
}

void ClosedState::pay_ok()
{
    std::cout << "Payment successful: Gate got Opened!\n";
    gate_->change_state(new OpenState(gate_));
}

void ClosedState::pay_failed()
{
    std::cout << "Payment failed: Gate is Closed!\n";
}
