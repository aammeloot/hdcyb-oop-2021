//
//  Icon.hpp
//  Composition
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#pragma once

#include "Icon.hpp"
#include <iostream>

using namespace std;

class Icon {
    string _name;
public:
    Icon(const string& someName);
    void render();
};
