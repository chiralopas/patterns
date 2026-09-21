/**
 * The problem: the object we want to construct is using so many other complex
 * types, but we don't want all parts of that object all times.
 *
 * Builder pattern: this separates the construction of complex object from its
 * representation.
 */

#include <iostream>
#include "car_builder.h"

#define NISSAN_DIRECTOR 0
#define TATA_DIRECTOR 0
#define TATA_NO_DIRECTOR 1


void print(Car* car)
{
    if (car->wheel != nullptr)
        std::cout << "wheel: " << car->wheel->provider << "\n";
    if (car->engine != nullptr)
        std::cout << "engine: " << car->engine->type << "\n";
    if (car->shape != nullptr)
        std::cout << "shape: " << car->shape->design << "\n";
}

int main()
{
    Car* car;
    Director director;

#if NISSAN_DIRECTOR
    NissanBuilder nissan;
    car = director.construct_car(nissan);
    print(car);
#endif

#if TATA_DIRECTOR
    TataBuilder tata;
    car = director.construct_car(tata);
    print(car);
#endif

#if TATA_NO_DIRECTOR
    TataBuilder tata_nd;
    // we can also use builder pattern without the director,
    // but for such we have to write the construction sequence ourselves
    tata_nd.build_wheel();
    tata_nd.build_engine();
    car = tata_nd.get_car();
    print(car);
#endif

    return 0;
}
