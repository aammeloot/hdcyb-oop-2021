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
    
    c.addPerson(shared_ptr<Person> (new Student("John", "Computing")));
    c.addPerson(shared_ptr<Person> (new Person("Fred")));
    c.addPerson(shared_ptr<Person> (new Lecturer("Aurelien", "C++")));
    
    c.introduceEveryone();
    
    return 0;
}
