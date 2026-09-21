#pragma once
#include "analytics.h"


class IMonitor
{
public:
    virtual ~IMonitor() = default;
    virtual void process_data(int value) = 0;
};


class Monitor : public IMonitor
{
public:
    void process_data(int value) override;
};


class AnalyticsAdapter : public IMonitor
{
private:
    Analytics* analytics_;

public:
    AnalyticsAdapter();
    ~AnalyticsAdapter() override;

    void process_data(int value) override;
};
