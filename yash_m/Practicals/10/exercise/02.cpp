/* Define a class student which contain member variables as rollno ,name and course. Write a program
using constructor as "Computer Engineering" for course . Accept this data for objects of class and
display the data.
    Name: yash ajay magar */

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

// Creating class named student
class student
{
    int rollno;
    char name[20], course[50];

public:
    student(int rn, char n[], char c[] = "Computer Engineering")
    {
        rollno = rn;
        strcpy(name, n);
        strcpy(course, c);
    }

    void display()
    {
        cout << setw(50) << setfill('*') << " " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollno << endl;
        cout << "Course Enrolled: " << course << endl;
        cout << setw(50) << setfill('*') << " " << endl;
    }
};

int main()
{
    // Object creation
    student y(31, "Yash Ajay Magar");

    y.display();

    return 0;
}