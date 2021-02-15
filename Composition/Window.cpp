//
//  Window.cpp
//  Composition
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include "Window.hpp"

Window::Window(const string& someTitle)
{
    _title = someTitle;
}

void Window::addIcon(const string& someName)
{
    Icon newIcon(someName);
    _icons.push_back(newIcon);
}

void Window::render()
{
    cout << "Window title: " << _title << endl;
    long iconCount = _icons.size();
    if (iconCount > 0)
    {
        for (long index = 0; index < iconCount; index++)
        {
            _icons[index].render();
        }
    }
    else
    {
        cout << "No icons to display" << endl;
    }
}
