#include "student.hpp"
#include "degree.hpp"
#include <iostream>
#include <string>
using namespace std;

// defining paramaterized student constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->degreeProgram = degreeProgram;
    // we know there will be three days/course values passed to us individually
    this->daysInCourse[0] = daysInCourse1;
    this->daysInCourse[1] = daysInCourse2;
    this->daysInCourse[2] = daysInCourse3;
    }

// defining getters (accessors)
string Student::getStudentID() {
    return studentID;
}

string Student::getFirstName() {
    return firstName;
}
string Student::getLastName() {
    return lastName;
}

string Student::getEmailAddress() {
    return emailAddress;
}

int Student::getAge() {
    return age;
}

int Student::getDaysInCourse(int arrayPosition) {
    return daysInCourse[arrayPosition];
}

DegreeProgram Student::getDegreeProgram() {
    return degreeProgram;
}

// defining setters (mutators)
void Student::setStudentID(string newStudentID) {
    this->studentID = newStudentID;
}

void Student::setFirstName(string newFirstName) {
    this->firstName = newFirstName;
}

void Student::setLastName(string newLastName) {
    this->lastName = newLastName;
}

void Student::setEmailAddress(string newEmailAddress) {
    this->emailAddress = newEmailAddress;
}

void Student::setAge(int newAge) {
    this->age = newAge;
}

void Student::setDaysInCourse(int newDaysInCourse, int arrayPosition) {
    this->daysInCourse[arrayPosition] = newDaysInCourse;
}

void Student::setAllDaysInCourses(int newDaysInCourse[]) {
    daysInCourse[0] = newDaysInCourse[0];
    daysInCourse[1] = newDaysInCourse[1];
    daysInCourse[2] = newDaysInCourse[2];
}

void Student::setDegreeProgram(DegreeProgram newDegreeProgram) {
    this->degreeProgram = newDegreeProgram;
}

// print method formatted according to requirements
void Student::print() {
    cout << studentID << "\t" << "First Name: " << firstName << "\t" << "Last Name: " << lastName << "\t" << "Age: " << age << "daysInCourse: {" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "} Degree Program: " << endl;
}
