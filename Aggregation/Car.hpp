//
//  Car.hpp
//  Aggregation
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#pragma once
#include <iostream>
class Engine;

using namespace std;

class Car {
    Engine *_engine;
public:
    Car(Engine *engine);
    ~Car();
    void describeEngine();
};
