/* Write a program to define a class student having data members name and roll no. Accept 
and display data for one object. Define the member function inside the c lass
Name: yash ajay magar */

#include<iostream>
using namespace std;

class Student {
    public:
        string nm;
        int rn;
        void input() {
            cout << "Enter name: ";
            cin >> nm;
            cout << "Enter roll no: ";
            cin >> rn;
        }
        void output() {
            cout << "Name: " << nm << endl;
            cout << "Roll No: " << rn << endl;
        }
};

int main() {
    Student s;
    s.input();
    s.output();
    return 0;
}
