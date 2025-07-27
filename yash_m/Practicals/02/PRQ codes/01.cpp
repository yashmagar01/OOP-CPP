/* Write a C++ program to access the global variable using scope resolution operator.
    Name: yash ajay magar */

#include<iostream>
using namespace std;

int y = 100;

int main()
{
    //Varible declaration
    int y = 10;

    cout << "\nValue of local y: " << y << endl;
    cout << "\nValue of globle y: " << ::y << endl;
    
    return 0;
}