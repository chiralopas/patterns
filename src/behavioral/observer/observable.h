#pragma once
#include <vector>
#include "observer.h"


class IObservable
{
protected:
    std::vector<IObserver*> observers_;

public:
    virtual ~IObservable() = default;

    virtual void add(IObserver* observer) = 0;
    virtual void remove(IObserver* observer) = 0;
    virtual void notify() = 0;
};


class WeatherStation : public IObservable
{
private:
    int temperature_;

public:
    WeatherStation();

    void add(IObserver* observer) override;
    void remove(IObserver* observer) override;
    void notify() override;

    void set_temperature(int temperature);
    int get_temperature();
};
