//
//  Student.cpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#include "Student.h"

using namespace std;

Student::Student(const string &_name, const string &_class):Person(_name)
{
    subject = _class;
}

void Student::introduce()
{
    cout << "My name is " << name << " and I study " << subject << endl;
}
