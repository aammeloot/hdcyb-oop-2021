//
//  Lecturer.hpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#pragma once
#include "Person.h"
#include <iostream>

using namespace std;

class Lecturer: public Person {
    string subject;
    
public:
    Lecturer(const string &_name, const string &_subject);
    void introduce();
};
