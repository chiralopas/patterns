#pragma once


class IMoveBehaviour
{
protected:
    double right_;
    double left_;
    bool crouch_;
    bool jump_;

public:
    virtual ~IMoveBehaviour() = default;

    virtual void on_right() = 0;
    virtual void on_left() = 0;
    virtual void on_crouch() = 0;
    virtual void on_jump() = 0;
};


class NormalMove : public IMoveBehaviour
{
public:
    NormalMove();

    void on_right() override;
    void on_left() override;
    void on_crouch() override;
    void on_jump() override;
};


class NoMove : public IMoveBehaviour
{
public:
    NoMove();

    void on_right() override;
    void on_left() override;
    void on_crouch() override;
    void on_jump() override;
};
