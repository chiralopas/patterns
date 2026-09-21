#include "car_builder.h"


// CarBuilder
CarBuilder::CarBuilder()
    : car_(new Car())
{
}

CarBuilder::~CarBuilder()
{
    delete car_;
}

Car* CarBuilder::get_car()
{
    return car_;
}


// NissanBuilder
void NissanBuilder::build_wheel()
{
    car_->wheel = new Wheel();
    car_->wheel->provider = "CEAT";
}

void NissanBuilder::build_engine()
{
    car_->engine = new Engine();
    car_->engine->type = "DIESEL";
}

void NissanBuilder::build_shape()
{
    car_->shape = new Shape();
    car_->shape->design = "SPORTS";
}


// TataBuilder
void TataBuilder::build_wheel()
{
    car_->wheel = new Wheel();
    car_->wheel->provider = "MRF";
}

void TataBuilder::build_engine()
{
    car_->engine = new Engine();
    car_->engine->type = "HYBRID";
}

void TataBuilder::build_shape()
{
    car_->shape = new Shape();
    car_->shape->design = "SUV";
}


// Director
Car* Director::construct_car(CarBuilder& builder)
{
    builder.build_wheel();
    builder.build_engine();
    builder.build_shape();
    return builder.get_car();
}
