/**
 * The Problem: we have an interface known by client but we introduce another
 * interface and we now want to use it with existing client
 *
 * Adapter pattern: converts the interface of a class into another interface
 * that client expects. Adapter lets class work together that couldn't otherwise
 * because incompatible interfaces.
 */

#include "monitor.h"


// client code we don't want to change
void call_process_data(IMonitor* monitor)
{
    int value = 5;
    monitor->process_data(value);
}

int main()
{
    Monitor monitor;
    call_process_data(&monitor);

    AnalyticsAdapter analytics;
    call_process_data(&analytics);

    return 0;
}
