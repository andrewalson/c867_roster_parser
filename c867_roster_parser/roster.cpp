#include "roster.hpp"
using namespace std;

// Parse string and create new student - to be added by add()?
void Roster::parse(string student) {
    
    size_t rhs = student.find(",");
    string studentID = student.substr(0, rhs);
    
    size_t lhs = rhs + 1;
    rhs = student.find(",", lhs);
    // substr() takes initial position and length, so pass rhs - lhs after the initial usage
    string firstName = student.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    string lastName = student.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    string emailAddress = student.substr(lhs, rhs - lhs);
    
    
    rhs = lhs + 1;
    lhs = student.find(",", lhs);
    int daysInCourse1 = stoi(student.substr(lhs, rhs - lhs));
    
    rhs = lhs + 1;
    lhs = student.find(",", lhs);
    int daysInCourse2 = stoi(student.substr(lhs, rhs - lhs));
    
    rhs = lhs + 1;
    lhs = student.find(",", lhs);
    int daysInCourse3 = stoi(student.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    // STOI String to Integer
    int age = stoi(student.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    string strDegreeProgram = student.substr(lhs, rhs - lhs);
    
    DegreeProgram degreeProgram;
    if (strDegreeProgram == "SECURITY")
        degreeProgram = SECURITY;
    else if (strDegreeProgram == "NETWORK")
        degreeProgram = NETWORK;
    else if (strDegreeProgram == "SOFTWARE")
        degreeProgram = SOFTWARE;
    
}

// Updates roster with student object set with instance variables from params
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    
    classRosterArray[++classSize] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}


