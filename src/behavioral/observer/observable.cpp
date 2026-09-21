#include "observable.h"
#include <algorithm>


WeatherStation::WeatherStation()
    : temperature_(0)
{
}

void WeatherStation::add(IObserver* observer)
{
    observers_.push_back(observer);
}

void WeatherStation::remove(IObserver* observer)
{
    // erase-remove idiom
    observers_.erase(
        std::remove(observers_.begin(), observers_.end(), observer),
        observers_.end());
}

void WeatherStation::notify()
{
    for (auto observer : observers_)
    {
        observer->update();
    }
}

void WeatherStation::set_temperature(int temperature)
{
    temperature_ = temperature;
    notify();
}

int WeatherStation::get_temperature()
{
    return temperature_;
}
