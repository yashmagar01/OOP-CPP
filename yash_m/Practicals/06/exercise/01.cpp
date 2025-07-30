/* Write a C++ program to create a class "Number" having data members n1 and n2 and perform 
mathematical operations like addition, subtraction, multiplication and division on two 
numbers using inline functions.

Name: yash ajay magar */

#include <iostream>
using namespace std;

class Number
{
    int n1, n2;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> n1 >> n2;
    }
    inline void add()
    {
        cout << "Addition: " << n1 + n2 << endl;
    }
    inline void subtract()
    {
        cout << "Subtraction: " << n1 - n2 << endl;
    }
    inline void multiply()
    {
        cout << "Multiplication: " << n1 * n2 << endl;
    }
    inline void divide()
    {
        if (n2 != 0)
            cout << "Division: " << (float)n1 / n2 << endl;
        else
            cout << "Division: Not possible (divide by zero)" << endl;
    }
};

int main()
{
    Number obj;
    obj.getData();
    obj.add();
    obj.subtract();
    obj.multiply();
    obj.divide();
    return 0;
}
