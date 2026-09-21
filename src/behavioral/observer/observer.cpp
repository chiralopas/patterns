#include "observer.h"
#include "observable.h"
#include <iostream>


PhoneDisplay::PhoneDisplay(WeatherStation* weather_station)
    : weather_station_(weather_station),
      temperature_(0)
{
    weather_station_->add(this);
    std::cout << "Phone Display registered!\n";
}

/**
 * @brief de-registers the Phone Display from weather station.
 * this is classic example a destructor not just capable of cleaning up memory
 * but can be used to cleanup any type of resource
 */
PhoneDisplay::~PhoneDisplay()
{
    weather_station_->remove(this);
    std::cout << "Phone Display de-registered!\n";
}

void PhoneDisplay::update()
{
    temperature_ = weather_station_->get_temperature();
}

void PhoneDisplay::print_updates()
{
    std::cout << "temperature on phone: " << temperature_ << "\n";
}
