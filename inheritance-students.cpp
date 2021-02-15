//
//  main.cpp
//  inheritance
//
//  Created by Aurélien Ammeloot on 12/11/2020.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// This is the base class - Person
class Person {
    // Protected instead of Private so derived classed can access
protected:
    string name;
    string surname;
public:
    // Standard constructor and methods below
    Person(string _name, string _surname)
    {
        name = _name;
        surname = _surname;
    }
    
    auto getFullName() { return name + " " + surname; }
};

// This is a derived class: student
// It's inheriting the members and methods of person
// The declaration mentions a link to Person
// public here ensures the public methods of Person are preserved
class Student: public Person
{
    // Declaration of private members, usual way
private:
    string studentID;
    vector<string> subjects;
public:
    // The constructor has a longer signature:
    // Class(types arguments):BaseClass(arguments)
    // Make sure the arguments for the base class are received by the
    // derivative class too
    Student(string _name, string _surname, string _studentID): Person(_name, _surname)
    {
        studentID = _studentID;
    }
    
    // Declare other members the same way
    void addSubject(string subject)
    {
        // Add something to a vector
        subjects.push_back(subject);
    }
    
    void listSubjects()
    {
        // This is a "foreach" loop
        for (auto &subject: subjects)
        {
            cout << subject << endl;
        }
    }
    
};

// Same rules as student apply here
class Lecturer: public Person
{
private:
    string staffID;
    string subject;
public:
    Lecturer(string _name, string _surname, string _staffID, string _subject = "nothing"): Person(_name, _surname)
    {
        staffID = _staffID;
        subject = _subject;
    }
    
    auto getSubject() { return subject; }
    
    void setSubject(string _subject) { subject = _subject; }
    
    auto getStaffID() { return staffID; }
};

int main(int argc, const char * argv[]) {
    
    // Creating a student and a lecturer
    Student john("John", "Smith", "123456");
    Lecturer fred("Fred", "Dickson", "7890", "Programming");
    
    john.addSubject("Programming");
    john.addSubject("Networking");
    // The call below will run the code from the Person base class
    cout << john.getFullName() << endl;
    john.listSubjects();
    
    cout << fred.getFullName() << endl;
    // The call below will run the code from the Person base class
    cout << fred.getSubject() << endl;
    
    return 0;
}
