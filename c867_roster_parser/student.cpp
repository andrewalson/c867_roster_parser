#include "student.hpp"
#include "degree.hpp"
#include <iostream>
#include <string>
using namespace std;

// defining paramaterized student constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysPerCourse[], DegreeProgram degreeProgram) {
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->emailAddress = emailAddress;
    this->age = age;
    this->degreeProgram = degreeProgram;
    // we know there will always be three courses/days values
    this->daysPerCourse[0] = daysPerCourse[0];
    this->daysPerCourse[1] = daysPerCourse[1];
    this->daysPerCourse[2] = daysPerCourse[2];
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

int Student::getDaysPerCourse(int arrayPosition) {
    return daysPerCourse[arrayPosition];
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

void Student::setDaysPerCourse(int newDaysPerCourse, int arrayPosition) {
    this->daysPerCourse[arrayPosition] = newDaysPerCourse;
}

void Student::setAllDaysPerCourses(int newDaysPerCourse[]) {
    daysPerCourse[0] = newDaysPerCourse[0];
    daysPerCourse[1] = newDaysPerCourse[1];
    daysPerCourse[2] = newDaysPerCourse[2];
//    for (int i = 0; i < DaysInCourseArraySize; i++) {
//        this->daysPerCourse[i] = newDaysPerCourse[i];
//    }
}

void Student::setDegreeProgram(DegreeProgram newDegreeProgram) {
    this->degreeProgram = newDegreeProgram;
}

// print method formatted according to requirements
void Student::print() {
    cout << studentID << "\t" << "First Name: " << firstName << "\t" << "Last Name: " << lastName << "\t" << "Age: " << age << "daysInCourse: {" << daysPerCourse[0] << ", " << daysPerCourse[1] << ", " << daysPerCourse[2] << "} Degree Program: " << endl;
}
