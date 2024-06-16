#include "roster.hpp"
using namespace std;

// Define destructor to release dynamically allocated memory
Roster::~Roster() {
    for (int i = 0; i <= index; i++) {
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
        }
    }
}

// Parse individual student string and call add() to create new student in roster array of student pointers
void Roster::parse(string student) {
    
    // rhs = right hand side, lhs = left hand side (of substring to pull from whole)
    size_t rhs = student.find(",");
    // We know first substring must start at position 0
    string studentID = student.substr(0, rhs);
    
    size_t lhs = rhs + 1;
    rhs = student.find(",", lhs);
    // substr() takes lhs as initial position rhs - lhs as length in chars after first usage
    string firstName = student.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    string lastName = student.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    string emailAddress = student.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    // stoi standard library function converts appropriately sized string of numbers to integer
    int age = stoi(student.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    int daysInCourse1 = stoi(student.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    int daysInCourse2 = stoi(student.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = student.find(",", lhs);
    int daysInCourse3 = stoi(student.substr(lhs, rhs - lhs));
    
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
    else
        throw std::runtime_error("Invalid degree program detected - could not parse to add.");
    
    add(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
    
}

// Updates roster with student object set with instance variables from params
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
    
    classRosterArray[++index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
}

void Roster::remove(string studentID) {
    bool removed = false;
    
    for (int i = 0; i <= index; i++) {
        
        if (classRosterArray[i] == nullptr) {
            continue;
        } else if (classRosterArray[i]->getStudentID() == studentID) {
            classRosterArray[i] = nullptr;
            removed = true;
            break;
        }
    }
    if (!removed) {
        cout << "Student ID not found in roster - did not remove.\n";
    }
}

void Roster::printAll() {
    for (int i = 0; i <= index ; i++) {
        if (classRosterArray[i] == nullptr) {
            continue;
        } else {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(string studentID) {
    
    for (int i = 0; i <= index; i++) {
        
        string currentID = classRosterArray[i]->getStudentID();
        if (currentID == studentID) {
            
            cout << "Student with ID " << currentID << ": ";
            cout << (classRosterArray[i]->getDaysInCourse(0) +
                    classRosterArray[i]->getDaysInCourse(1) +
                    classRosterArray[i]->getDaysInCourse(2)) / 3;
            cout << "\n";
            break;
        }
    }
}

// Sufficient email validation according to requirements
void Roster::printInvalidEmails() {
    
    string email;
    for (int i = 0; i <= index; i++) {
        
        if (classRosterArray[i] == nullptr) { break; }
        
        email = classRosterArray[i]->getEmailAddress();
        // find() returns position of char parameter or npos if not found
        if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
            cout << classRosterArray[i]->getEmailAddress() << endl;
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
    for (int i = 0; i <= index; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}
