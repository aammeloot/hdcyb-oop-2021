//
//  Person.hpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#pragma once
#include <iostream>

using namespace std;

class Person {
protected:
    string name;
    
public:
    Person(const string &_name);
    virtual void introduce();
};

