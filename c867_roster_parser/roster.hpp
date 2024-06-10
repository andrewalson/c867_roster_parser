#pragma once
#include <stdio.h>
#include <iostream>
#include "student.hpp"
using namespace std;

// Manager class
class Roster {
public:
    // We know to expect a class size of five students
    Student* classRosterArray[5];
    
    // Method to parse string and add (array method, next avail.) student to roster
    void parse(string studentString);
    
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    
private:
    // to make using roster array easier
    int index = -1;
};
