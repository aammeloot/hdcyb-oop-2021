//
//  Student.hpp
//  Association
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Lecturer;

class Student {
    string _name;
    vector<Lecturer> _tutors;
public:
    const string& getName();
    void setName(const string& someName);
    void addTutor(const Lecturer& someLecturer);
    void listTutors();
};
