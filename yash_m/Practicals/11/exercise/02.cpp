/*  Write a C++ program to define a class "Employee" having data members emp_no,
emp_name and emp_designation. Derive a class "Salary" from "Employee" having data
members basic, hra, da, gross_sal. Accept and display data for one employee.

    Name: yash ajay magar */

#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_no;
    string emp_name;
    string emp_designation;

    void read()
    {
        cout << "\nEnter Employee Number, Name and Designation(Respectively): ";
        cin >> emp_no >> emp_name >> emp_designation;
    }
};

class salary : public Employee
{
public:
    float DA, HRA, basic, gross;

    void calculate()
    {
        cout << "Enter the base salary: ";
        cin >> basic;
        DA = 0.745 * basic;       // DA is 74.5% of basic
        HRA = 0.30 * basic;       // HRA is 30% of basic
        gross = basic + DA + HRA; // Gross salary formula
    }

    void display()
    {
        cout << "\nEmployee Number: " << emp_no << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Designation: " << emp_designation << endl;
        cout << "\nBasic Salary: " << basic << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Gross: " << gross << endl;
    }
};

int main()
{   // Object creation
    salary e1;

    e1.read();
    e1.calculate();
    e1.display();

    return 0;
}