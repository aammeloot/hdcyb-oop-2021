//
//  Lecturer.hpp
//  Association
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Student;

class Lecturer {
    string _name;
    vector<Student> _students;
public:
    const string& getName();
    void setName(const string& someName);
    void addStudent(const Student& someStudent);
    void listStudents();
};
