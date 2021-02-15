//
//  Lecturer.cpp
//  Association
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include "Lecturer.hpp"
#include "Student.hpp"

const string& Lecturer::getName()
{
    return _name;
}

void Lecturer::setName(const string& someName)
{
    _name = someName;
}

void Lecturer::addStudent(const Student &someStudent)
{
    _students.push_back(someStudent);
}

void Lecturer::listStudents()
{
    cout << _name << " teaches:" << endl;
    // List all the students
    for(int index = 0; index < _students.size(); index++)
    {
        cout << _students[index].getName() << endl;
    }
}
