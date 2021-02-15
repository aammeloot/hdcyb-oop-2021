//
//  main.cpp
//  College2
//
//  Created by Aurélien Ammeloot on 26/11/2020.
//

#include "College.h"
#include "Person.h"
#include "Lecturer.h"
#include "Student.h"

int main(int argc, const char * argv[]) {
    
    College c;
    
    c.addPerson(new Student("John", "Computing"));
    c.addPerson(new Person("Fred"));
    c.addPerson(new Lecturer("Aurelien", "C++"));
    
    c.introduceEveryone();
    
    return 0;
}
