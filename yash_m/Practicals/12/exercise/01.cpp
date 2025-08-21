/*  1. Identify the following type of Inheritance shown . Write a definition of each class .Write suitable
member functions to accept and display data for each class.
    Name: yash ajay magar */

#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    string name;

    void read()
    {
        cout << "\nEnter Employee id and name: ";
        cin >> emp_id >> name;
    }
};

class Emp_union:public Employee
{
    public:
        int member_id;

        void read()
        {
            Employee::read();
            cout << "Enter the Member ID: "; cin >> member_id;
        }
};

class Emp_info:public Emp_union
{
    public:
        int salary;

        void read()
        {
            Emp_union::read();
            cout << "ENter your salary: ";
            cin >> salary;
        }
        void display()
        {
            cout << "Employee ID: " << emp_id << endl;
            cout << "Name: " << name << endl; 
            cout << "Member ID: " << member_id << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main()
{
    Emp_info e1;

    e1.read();
    cout << "---Output---" << endl;
    e1.display();

    return 0;
}