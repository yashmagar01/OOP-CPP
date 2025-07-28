/* Write a program to print “hi” msg if entered value is more than 10 otherwise print “bye” msg
on output screen. (Use of Relational operator)
Name: yash ajay magar */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int number;

    // Reading value
    cout << "\nEnter a value: ";
    cin >> number;

    // Performing relational operators
    number > 10 ? cout << "hi" : cout << "bye";
    return 0;
}