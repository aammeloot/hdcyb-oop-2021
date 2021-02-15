//
//  Engine.hpp
//  Aggregation
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#pragma once
#include <iostream>

using namespace std;

class Engine
{
    string _type;
public:
    Engine(const string& engineType);
    ~Engine();
    const string& getType();
};
