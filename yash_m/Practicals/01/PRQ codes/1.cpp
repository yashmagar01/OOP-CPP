/* Write a C++ program to evaluate the following expressions:
    X=(-b-(b2-4ac))/2a
    Name: yash ajay magar */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Variable Declaration
    int a, b, c, x;

    cout << "Enter values of a, b and c: " << endl;
    cin >> a >> b >> c;

    x = (-b -(b * b - 4 * a * c)) / 2 * a;

    cout << "\nValue of x: " << x << endl;

    return 0;
}