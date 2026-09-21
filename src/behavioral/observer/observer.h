#pragma once
class WeatherStation;


class IObserver
{
public:
    virtual ~IObserver() = default;
    virtual void update() = 0;
};


class PhoneDisplay : public IObserver
{
private:
    WeatherStation* weather_station_;
    int temperature_;

public:
    PhoneDisplay(WeatherStation* weather_station);
    ~PhoneDisplay() override;

    void update() override;
    void print_updates();
};
