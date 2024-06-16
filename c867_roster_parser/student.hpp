#pragma once
#include <iostream>
#include "degree.hpp"
using namespace std;

class Student {
public:
    // No default constructor according to project requirements
    // Paramaterized constructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    // Accessor instance methods (getters)
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int getDaysInCourse(int arrayPosition);
    DegreeProgram getDegreeProgram();
    
    // Mutator instance methods (setters)
    void setStudentID(string newStudentID);
    void setFirstName(string newFirstName);
    void setLastName(string newLastName);
    void setEmailAddress(string newEmailAddress);
    void setAge(int newAge);
    void setDaysInCourse(int newDaysInCourse, int arrayPosition);
    void setAllDaysInCourses(int neDaysInCourse[]);
    void setDegreeProgram(DegreeProgram degreeProgram);
    
    void print();
    
private:
    // Student member variables
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
};
