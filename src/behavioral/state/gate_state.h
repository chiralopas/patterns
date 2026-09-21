#pragma once
class Gate;


class IGateState
{
protected:
    Gate* gate_;

public:
    IGateState(Gate* gate);
    virtual ~IGateState() = default;

    virtual void enter() = 0;
    virtual void pay_ok() = 0;
    virtual void pay_failed() = 0;
};


class OpenState : public IGateState
{
public:
    OpenState(Gate* gate);

    void enter() override;
    void pay_ok() override;
    void pay_failed() override;
};


class ClosedState : public IGateState
{
public:
    ClosedState(Gate* gate);

    void enter() override;
    void pay_ok() override;
    void pay_failed() override;
};
