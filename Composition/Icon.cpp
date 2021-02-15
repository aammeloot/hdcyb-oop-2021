//
//  Icon.cpp
//  Composition
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include "Icon.hpp"

Icon::Icon(const string &someName)
{
    _name = someName;
}

void Icon::render()
{
    cout << _name << endl;
}
