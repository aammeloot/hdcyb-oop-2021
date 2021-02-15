//
//  Car.cpp
//  Aggregation
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include "Car.hpp"
#include "Engine.hpp"

Car::Car(Engine *engine)
{
    _engine = engine;
}

Car::~Car()
{
    cout << "Car being destroyed " << endl;
    _engine = NULL;
}

void Car::describeEngine()
{
    cout << "car address: " << this << endl;
    cout << "address of engine:" << _engine << endl;
    cout << "type of engine: " << _engine->getType() << endl;
}
