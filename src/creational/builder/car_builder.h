#pragma once
#include "car.h"


class CarBuilder
{
protected:
    Car* car_;

public:
    CarBuilder();
    virtual ~CarBuilder();

    virtual void build_wheel() = 0;
    virtual void build_engine() = 0;
    virtual void build_shape() = 0;

    Car* get_car();
};


class NissanBuilder : public CarBuilder
{
public:
    /**
     * @brief "Nissan" will provide custom wheel
     */
    void build_wheel() override;
    void build_engine() override;
    void build_shape() override;
};


class TataBuilder : public CarBuilder
{
public:
    /**
     * @brief "Tata" will provide a different wheel
     */
    void build_wheel() override;
    void build_engine() override;
    void build_shape() override;
};


/**
 * @brief director will use a "sequence" to build the product
 */
class Director
{
public:
    /**
     * @param builder concrete builder passed by reference,
     * thus ownership remains with the caller
     */
    Car* construct_car(CarBuilder& builder);
};
