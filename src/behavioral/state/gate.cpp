#include "gate.h"


Gate::Gate()
    : state_(new ClosedState(this))
{
}

Gate::~Gate()
{
    delete state_;
}

void Gate::on_enter()
{
    state_->enter();
}

void Gate::on_pay_ok()
{
    state_->pay_ok();
}

void Gate::on_pay_failed()
{
    state_->pay_failed();
}

void Gate::change_state(IGateState* state)
{
    // delete previous state
    delete state_;
    state_ = state;
}
