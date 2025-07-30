/* Write a C++ program to declare a class "staff' having data members name,
               basic salary, DA, HRA and calculate gross salary. Accept and display data for one staff.
    Where, 
        DA=74.5% of basic
        1.  HRA= 30% of basic.
        ii.  Gross_salary=basic+HRA+DA

Name: yash ajay magar */


#include <iostream>
#include <iomanip>
using namespace std;

class Staff
{
    string name;
    float basic, DA, HRA, gross;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> basic;
    }
    void calculate()
    {
        DA = 0.745 * basic;       // DA is 74.5% of basic
        HRA = 0.30 * basic;       // HRA is 30% of basic
        gross = basic + DA + HRA; // Gross salary formula
    }
    void showData()
    {
        cout << fixed << setprecision(2);
        cout << "Name: " << name << endl;
        cout << "Basic: " << basic << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Gross: " << gross << endl;
    }
};

int main()
{
    Staff s;
    s.getData();
    s.calculate();
    s.showData();
    return 0;
}
