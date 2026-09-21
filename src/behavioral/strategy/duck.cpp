#include "duck.h"


Duck::Duck(IQuackBehaviour* quack, IFlyBehaviour* fly)
    : quack_(quack), fly_(fly)
{
}

Duck::~Duck()
{
    delete quack_;
    delete fly_;
}

void Duck::quack()
{
    quack_->quack();
}

void Duck::fly()
{
    fly_->fly();
}
