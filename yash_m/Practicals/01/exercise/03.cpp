/*  Write a program to print largest number among two number using Conditional operator.
Name: yash ajay magar */

#include<iostream>
using namespace std;

int main()
{
    //Variable declaration
    float num1, num2;

    //Reading the values
    cout << "\nEnter two numebrs: ";
    cin >> num1 >> num2;

    //Using conditional operators 
    if(num1 > num2)
    {
        cout << num1 << " is " << "Greater then " << num2 << endl;
    }
    else if(num1 == num2)
    {
        cout << num1 << " is equal to " << num2 << endl;
    }
    else
        cout << num2 << " is " << "Greater then " << num1 << endl;

    return 0;
}