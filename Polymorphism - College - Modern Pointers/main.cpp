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
    
    c.addPerson((shared_ptr<Person>)(make_shared<Student>("John", "C++"));
    c.addPerson(make_shared<Person>("Fred"));
    c.addPerson((shared_ptr<Person>)make_shared<Lecturer>("Aurélien", "C++"));
    
    c.introduceEveryone();
    
    return 0;
}
