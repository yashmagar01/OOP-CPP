/* 1. Write a C++ program to define a class "Student" having data members roll_no, 
name. Derive a class "Marks" from "Student" having data members ml,m2,m3, 
total and percentage. Accept and display data for one student. 
    Name: yash ajay magar */

#include<iostream>
using namespace std;

class student
{
    public:
        int roll_no;
        string name;

        void read()
        {
            cout << "\nEnter Roll no.: ";
            cin >> roll_no;
            cout << "ENter your name: ";
            cin >> name;
        }
};

class Marks: public student
{
    public:
        float m1, m2, m3, total, per;;

        void read()
        {
            student::read();
            cout << "\nEnter marks of Three subjects: ";
            cin >> m1 >> m2 >> m3;
        }
        void cal()
        {
            total = (m1 + m2 + m3);
            per = total / 3.0;
        }
        void display()
        {
            cout << "\nRoll no.: " << roll_no << endl;
            cout << "Name: " << name << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Percentage: " << per << "%" << endl;
        }
};

int main()
{
    Marks s1;

    s1.read();
    s1.cal();
    s1.display();

    return 0;
}