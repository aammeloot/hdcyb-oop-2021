//
//  main.cpp
//  Aggregation
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include <iostream>
#include "Car.hpp"
#include "Engine.hpp"


int main(int argc, const char * argv[]) {
    
    // Creating an engine
    Engine *e = new Engine("Petrol");
    
    // Creating a car with that engine
    Car *c = new Car(e);
    c->describeEngine();
    
    // Deleting the car will preserve the engine
    delete c;
    
    // Create another car
    Car *c2 = new Car(e);
    c2->describeEngine();
    delete c2;
    
    delete e;
    
    return 0;
}
