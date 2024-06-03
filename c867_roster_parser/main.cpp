#include <iostream>
#include "degree.hpp"
#include "student.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    const string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Andrew,Alson,aalson@wgu.edu,24,30,40,25,SOFTWARE"};
    
    // TESTING //
    // ******* //
    
    cout << studentData[1] << endl;
    
    Student tester("A6", "Andrew", "Alson", "aalson@wgu.edu", 24, 30, 20, 10, SOFTWARE);
    cout << "Name: " << tester.getFirstName() << " " << tester.getLastName() << endl;
    tester.setLastName("Olson");
    cout << "Now, last name: " << tester.getLastName() << endl;
    
    // PROD //
    // **** //
    
    cout << "C867 Scripting and Programming Applications in C++" << endl;
    cout << "Class Roster Performance Assessment" << endl;
    cout << "Andrew Alson (Student ID: 011869329)" << endl;
    
    cout << "Display all students from course:" << endl;
    
    
}
