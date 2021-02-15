//
//  College.cpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#include "College.h"

using namespace std;

College::~College()
{
    for(int index = 0; index < people.size(); index++)
    {
        delete people[index];
    }
}

void College::addPerson(Person *newPerson)
{
    people.push_back(newPerson);
}

void College::introduceEveryone()
{
    for(int index = 0; index < people.size(); index++)
    {
        Person *currentPerson = people[index];
        currentPerson->introduce();
    }
}
