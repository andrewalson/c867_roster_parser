#pragma once
#include "student.hpp"
using namespace std;

// Manager class
class Roster {
public:
    // We know to expect a class size of five students
    const static int expectedStudents = 5;
    Student* classRosterArray[expectedStudents];
    
    int index = -1; // Is incremented when roster array is initially populated or added to,
    // representing roster instance's current number of students minus one
    
    // Method to parse string and add (array method, next avail.) student to roster
    void parse(string studentString);
    
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
};
