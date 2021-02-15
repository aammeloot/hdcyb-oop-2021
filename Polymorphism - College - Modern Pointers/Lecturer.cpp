//
//  Lecturer.cpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#include "Lecturer.h"

using namespace std;

Lecturer::Lecturer(const string &_name, const string &_subject):Person(_name)
{
    subject = _subject;
}

void Lecturer::introduce()
{
    cout << "My name is " << name << " and I teach " << subject << endl;
}
