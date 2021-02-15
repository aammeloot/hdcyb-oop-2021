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
    vector<shared_ptr<Person>> people;
public:
    void addPerson(shared_ptr<Person> newPerson);
    void introduceEveryone();
};
