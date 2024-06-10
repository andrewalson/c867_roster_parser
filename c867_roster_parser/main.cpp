#include <iostream>
#include "degree.hpp"
#include "student.hpp"
#include "roster.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
        
    const string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Andrew,Alson,aalson@wgu.edu,24,30,40,25,SOFTWARE"};
    
    cout << "C867 Scripting and Programming Applications in C++" << endl;
    cout << "Class Roster Performance Assessment" << endl;
    cout << "Andrew Alson (Student ID: 011869329)" << endl;
    
    Roster classRoster; // Statically allocated roster instance
    
//    for (int i = 0; i < sizeof(classRoster.classRosterArray); i++ ) {}
    
    cout << "Displaying all students from course:" << endl;
    
    cout << "Displaying invalid emails:" << endl;
    
    
    
    // TESTING //
    
    cout << studentData[1] << endl;
    
    Student tester("A6", "Andrew", "Alson", "aalson@wgu.edu", 24, 30, 20, 10, SOFTWARE);
    cout << "Name: " << tester.getFirstName() << " " << tester.getLastName() << endl;
    tester.setLastName("Olson");
    cout << "Now, last name: " << tester.getLastName() << endl;
    
    classRoster.parse("A5,Andrew,Alson,aalson@wgu.edu,24,5,20,25,SOFTWARE");
    cout << classRoster.classRosterArray[0] << endl; // Prints memory address of array index
    
    Student* current = classRoster.classRosterArray[0];
    cout << current->getFirstName() << endl; // Test a method
    
    Student* testerPointer = &tester;
    cout << testerPointer->getEmailAddress() << endl;
    
    cout << "continuity test" << endl;
    
    //for (int i = 0; i < sizeof(classRoster.classRosterArray); i++) {
        //Student* current = classRoster.classRosterArray[i];
        //cout << current->getFirstName();
        //Student::getFirstName(classRoster.classRosterArray[i]);
    //}
    
}
