#pragma once
#include <iostream>
#include <string>
#include "degree.hpp"
using std::string;

class Student {
public:
    // no default constructor according to project requirements
    // paramaterized constructor
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysCourse1, int daysCourse2, int daysCourse3, DegreeProgram degreeProgram);
    
    // declaring getters (accessors)
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmailAddress();
    int getAge();
    int getDaysPerCourse(int arrayPosition);
    DegreeProgram getDegreeProgram();
    
    // setters (mutators)
    void setStudentID(string newStudentID);
    void setFirstName(string newFirstName);
    void setLastName(string newLastName);
    void setEmailAddress(string newEmailAddress);
    void setAge(int newAge);
    void setDaysPerCourse(int newDaysPerCourse, int arrayPosition);
    void setAllDaysPerCourses(int newDaysPerCourse[]);
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
    int daysPerCourse[3];
    DegreeProgram degreeProgram;
};
