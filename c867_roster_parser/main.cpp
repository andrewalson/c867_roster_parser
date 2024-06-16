#include "degree.hpp"
#include "student.hpp"
#include "roster.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
        
    const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Andrew,Alson,aalson@wgu.edu,24,30,40,25,SOFTWARE"
    };
    
    cout << "C867 Scripting and Programming Applications in C++\n";
    cout << "Class Roster Performance Assessment Task\n";
    cout << "Andrew Alson (Student ID: 011869329)\n\n";
    
    Roster classRoster; // Statically allocated Roster class instance
    
    // Parse & add each student data string to roster instance
    for (int i = 0; i < Roster::expectedStudents; i++ ) {
        classRoster.parse(studentData[i]);
    }
    
    // Method call demonstrations:
    
    cout << "Displaying all students in course roster:\n";
    classRoster.printAll();
    cout << "\n";
    
    cout << "Displaying invalid emails detected:\n";
    classRoster.printInvalidEmails();
    cout << "\n";
    
    cout << "Displaying average days per course for all students in course roster:\n";
    for (int i = 0; i <= classRoster.index; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }
    cout << "\n";
    
    cout << "Software degree program students in course:\n";
    classRoster.printByDegreeProgram(SOFTWARE);
    cout << "\n";
    
    cout << "Removing student matching ID: 'A3'.\n";
    classRoster.remove("A3");
    cout << "Displaying updated students in course roster:\n";
    classRoster.printAll();
    cout << "\n";
    
    cout << "Attempting to remove student ID 'A3' again:\n";
    classRoster.remove("A3");
    cout << "\n";
    
    cout << "Displaying average days in course for requested student ID.\n";
    classRoster.printAverageDaysInCourse("A1");
    cout << "\n";
    
} // Roster destructor automatically called once out of scope
