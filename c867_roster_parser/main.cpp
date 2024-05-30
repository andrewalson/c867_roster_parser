#include <iostream>
#include "degree.hpp"
#include "student.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    const string studentData[] =

    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", "A5,Andrew,Alson,aalson@wgu.edu,24,30,20,25,SOFTWARE"};
    
    cout << studentData[1];
    
    int array[3] = {0, 1, 2};
    Student testStudent("A6", "Andrew", "Alson", "aalson@wgu.edu", 24, array, SOFTWARE);
    
    
}
