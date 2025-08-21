/* 1. Write a C++ program to implement the following inheritance. Accept and display data for one 
programmer and one manager. Make display function virtual. 
Name: yash ajay magar */

#include <iostream>
using namespace std;

class Employee
{
public:
    int empno, empcode;
    string name;
    void getEmp()
    {
        cout << "Enter Emp No, Emp code and Name: ";
        cin >> empno >> empcode >> name;
    }
    virtual void display()
    {
        cout << "Emp No: " << empno 
             << " Name: " << name 
             << " Emp Code: " << empcode << endl;
    }
    virtual ~Employee() {}
};

class Programmer : public Employee
{
public:
    string skill;
    void getProg()
    {
        getEmp();
        cout << "Enter skill: ";
        cin >> skill;
    }
    void display() override
    {
        Employee::display();
        cout << "Skill: " << skill << endl;
    }
};

class Manager : public Employee
{
public:
    string department;
    void getMgr()
    {
        getEmp();
        cout << "Enter Department: ";
        cin >> department;
    }
    void display() override
    {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Programmer p;
    Manager m;

    cout << "-- Programmer Input --\n";
    p.getProg();

    cout << "-- Manager Input --\n";
    m.getMgr();

    cout << "\n-- Output --\n";
    p.display();   
    m.display();   

    return 0;
}
