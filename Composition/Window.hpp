//
//  Window.hpp
//  Composition
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#pragma once

#include <iostream>
#include <vector>
#include "Icon.hpp"

using namespace std;

class Window {
    string _title;
    vector<Icon> _icons;
public:
    Window(const string& someTitle);
    void addIcon(const string& someName);
    void render(); // This would be graphical in an IRL OS
};
