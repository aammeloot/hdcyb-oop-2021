//
//  College.hpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#pragma once
#include <iostream>
#include <vector>
#include "Person.h"

class College {
    vector<Person *> people;
public:
    ~College();
    void addPerson(Person *newPerson);
    void introduceEveryone();
};
