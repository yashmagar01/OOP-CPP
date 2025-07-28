/* Write a C++ code to evaluate following expression using input output function:
    y= 5*x-5 where value of x is taken from user. Find the value of y. 
    Name: yash ajay magar */

#include<iostream>
using namespace std;

int main()
{
    //Variable declaration
    int x, y;

    //Reading values
    cout << "\nEnter values of x: ";
    cin >> x;

    y = 5 * x - 5;

    cout << "Value of y is " << y << endl;

    return 0;
}