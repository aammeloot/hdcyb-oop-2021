//
//  College.cpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#include "College.h"

using namespace std;

void College::addPerson(shared_ptr<Person> newPerson)
{
    people.push_back(newPerson);
}

void College::introduceEveryone()
{
    for(int index = 0; index < people.size(); index++)
    {
        people[index]->introduce();
    }
}
