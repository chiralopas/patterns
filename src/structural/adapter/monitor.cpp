#include "monitor.h"
#include <iostream>


void Monitor::process_data(int value)
{
    std::cout << "input in int form: " << value << "\n";
}


AnalyticsAdapter::AnalyticsAdapter()
    : analytics_(new Analytics())
{
}

AnalyticsAdapter::~AnalyticsAdapter()
{
    delete analytics_;
}

void AnalyticsAdapter::process_data(int value)
{
    // here we convert int to string for simplicity. but if Analytics
    // only accepted json, then this adapter would convert to json instead
    auto input = std::to_string(value);
    analytics_->publish_report(input);
}
