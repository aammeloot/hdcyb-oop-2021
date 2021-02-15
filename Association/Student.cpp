//
//  Student.cpp
//  Association
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//

#include "Student.hpp"
#include "Lecturer.hpp"


const string& Student::getName()
{
    return _name;
}

void Student::setName(const string &someName)
{
    _name = someName;
}

void Student::addTutor(const Lecturer &someLecturer)
{
    _tutors.push_back(someLecturer);
}

void Student::listTutors()
{
    // Loop all in the list
    cout << _name << " is being taught by:" << endl;
    for(int index = 0; index < _tutors.size(); index++)
    {
        cout << _tutors[index].getName() << endl;
    }
}
