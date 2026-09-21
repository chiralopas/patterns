#pragma once


class IQuackBehaviour
{
public:
    virtual ~IQuackBehaviour() = default;
    virtual void quack() = 0;
};


class NormalQuack : public IQuackBehaviour
{
public:
    void quack() override;
};


class IntenseQuack : public IQuackBehaviour
{
public:
    void quack() override;
};
