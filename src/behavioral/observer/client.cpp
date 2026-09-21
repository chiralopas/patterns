/**
 * The Problem: there is a source object which is being observed by multiple other objects so
 * when source object changes then all of those dependent objects should be changed as well.
 *
 * a very simple way would be to check the source frequently in some timestamp but that will waste
 * too much resources and most of the time there won't be any update
 *
 * The Observer pattern: it defines a one to many dependency between objects, so if one object
 * changes state all of its dependencies get notified and update automatically.
 */

#include <iostream>
#include "observable.h"
#include "observer.h"


int main()
{
    // source
    WeatherStation weather_station;
    {
        // dependent on source
        PhoneDisplay phone_display(&weather_station);
        weather_station.set_temperature(2);  // updated on weather station
        phone_display.print_updates();       // check on PhoneDisplay
    }

    return 0;
}
