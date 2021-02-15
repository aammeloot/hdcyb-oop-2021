//
//  Student.h
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#pragma once
#include <iostream>
#include "Person.h"

using namespace std;

class Student: public Person {
    string subject;
    
public:
    Student(const string &_name, const string &_subject);
    void introduce();
};
