//
//  main.cpp
//  Association
//
//  Created by Aurélien Ammeloot on 21/01/2021.
//


#include <iostream>
#include "Student.hpp"
#include "Lecturer.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

    // Create 5 students;
    Student s1,s2,s3,s4,s5;
    // Create 2 lecturers;
    Lecturer l1,l2;
    
    // I created the students and lecturers, they exist without each other
    
    s1.setName("Tomasz");
    s2.setName("Jacek");
    s3.setName("Stewart");
    s4.setName("Justin");
    s5.setName("Megan");
    
    l1.setName("Aurelien");
    l2.setName("Arthur");
    
    // The objects are associated later on
    s1.addTutor(l1);
    s2.addTutor(l1);
    s3.addTutor(l1);
    l1.addStudent(s1);
    l1.addStudent(s2);
    l1.addStudent(s3);
    
    s4.addTutor(l2);
    s5.addTutor(l2);
    l2.addStudent(s4);
    l2.addStudent(s5);
    
    // Examples of descriptions
    s1.listTutors();
    l1.listStudents();
    s5.listTutors();
    l2.listStudents();

    return 0;
}

