#pragma once
#include <iostream>
#include <string>
#include "degree.hpp"
using namespace std;

class Student {
public:
    // no default constructor according to project requirements
    // paramaterized constructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    // declaring getters (accessors)
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int getDaysInCourse(int arrayPosition);
    DegreeProgram getDegreeProgram();
    
    // setters (mutators)
    void setStudentID(string newStudentID);
    void setFirstName(string newFirstName);
    void setLastName(string newLastName);
    void setEmailAddress(string newEmailAddress);
    void setAge(int newAge);
    void setDaysInCourse(int newDaysInCourse, int arrayPosition);
    void setAllDaysInCourses(int neDaysInCourse[]);
    void setDegreeProgram(DegreeProgram degreeProgram);
    
    // print method
    void print();
    
    // int constant could allow passing array of courses?
    // const static int numberCourses = 3;
    
private:
    // student variables
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;
};
