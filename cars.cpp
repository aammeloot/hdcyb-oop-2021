//
//  main.cpp
//  Cars
//
//  Created by Aurélien Ammeloot on 29/10/2020.
//

#include <iostream>

using namespace std;

class Car {
    
    // Member variables (private)
    string makeModel;
    string colour;
    bool engineState;
    
public:
    
    // Constructor taking make/model and colour
    Car(string _makeModel, string _colour);
    
    // Print make and model
    void describe();
    
    // Methods
    void startEngine();
    void stopEngine();
    
    // Access the state of the engine
    bool getEngineState();
    
};

Car::Car(string _makeModel, string _colour)
{
    makeModel = _makeModel;
    colour = _colour;
}

void Car::startEngine()
{
    engineState = true;
    cout << "Engine is started" << endl;
}

void Car::stopEngine()
{
    engineState = false;
    cout << "Engine is stopped" << endl;
}

void Car::describe()
{
    cout << makeModel << "," << colour << endl;
}

bool Car::getEngineState()
{
    return  engineState;
}

int main(int argc, const char * argv[]) {
    
    Car c("Renault Clio", "Red");
    Car t("Tesla Model 3", "Black");
    
    c.describe();
    t.describe();

    c.startEngine();
    c.stopEngine();
    
    cout << "The engine state of c is " << c.getEngineState() << endl;
    
    return 0;
}
