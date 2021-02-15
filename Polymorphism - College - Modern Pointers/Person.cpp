//
//  Person.cpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#include "Person.h"

using namespace std;

Person::Person(const string &_name)
{
    name = _name;
}

void Person::introduce()
{
    cout << "My name is " << name << endl;
}
