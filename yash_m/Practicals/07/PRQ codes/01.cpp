/* WAP to declare a class calculation. Display addition, subtraction, multiplication, division of
two numbers. Use friend function.
Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

class calculation
{
    // Varible declaration
    int a, b;

public:
    void getdata()
    {
        cout << "\nEnter two numbers: ";
        cin >> a >> b;
    }
    friend void operations(calculation c);
};

// For calculating and to display outputs
void operations(calculation c)
{
    // For decorating output
    cout << setw(60) << setfill('*') << "" << endl;
    cout << "Addition is: " << c.a + c.b << endl;
    cout << "Substration is: " << c.a - c.b << endl;
    cout << "Multiplication is: " << c.a * c.b << endl;

    if (c.a == 0)
    {
        cout << "Dividing to '0' is not allowed in maths" << endl;
    }
    else
    {
        cout << "Division is: " << c.a / c.b << endl;
    }
    cout << setw(60) << setfill('*') << "" << endl;
}

int main()
{
    // Object creation
    calculation o1;

    // Function calling
    o1.getdata();
    operations(o1);

    return 0;
}