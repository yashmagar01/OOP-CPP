/* Write a program to define a class student having data members name and roll no. Accept
and display data for one object. Define the member function inside the class.
name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;

    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll_no;
    }
    void showData()
    {
        cout << setw(60) << setfill('*') << "" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << setw(60) << setfill('*') << "" << endl;
    }
};

int main()
{
    Student s;
    s.getData();
    s.showData();
    return 0;
}
