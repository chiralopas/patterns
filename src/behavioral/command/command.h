#pragma once


class ICommand
{
public:
    virtual ~ICommand() = default;

    virtual void execute() = 0;
    virtual void undo() = 0;
};


class LightCommand : public ICommand
{
public:
    void execute() override;
    void undo() override;
};


class FanCommand : public ICommand
{
public:
    void execute() override;
    void undo() override;
};
