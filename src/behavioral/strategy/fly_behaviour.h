#pragma once


class IFlyBehaviour
{
public:
    virtual ~IFlyBehaviour() = default;
    virtual void fly() = 0;
};


class NormalFly : public IFlyBehaviour
{
public:
    void fly() override;
};


class HighFly : public IFlyBehaviour
{
public:
    void fly() override;
};


class NoFly : public IFlyBehaviour
{
public:
    void fly() override;
};
