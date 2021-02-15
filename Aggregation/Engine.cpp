//
//  Engine.cpp
//  Aggregation
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include "Engine.hpp"

Engine::Engine(const string& engineType)
{
    _type = engineType;
}

Engine::~Engine()
{
    cout << "Engine destroyed" << endl;
}

const string& Engine::getType()
{
    return _type;
}

