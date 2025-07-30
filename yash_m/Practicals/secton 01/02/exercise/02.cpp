/* Write a program to display the massage “Welcome to the world of C++” using manipulators.
Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Used "setfill" and "endl" manipulators
    cout << setw(100) << setfill('*') << "" << endl; // Decorative line
    cout << "These top and bottom lines ('*') are printed by using 'setfill' manipulator." << endl;
    cout << "This line is printed beacuse i used 'endl' maipulator." << endl; 
    cout << setw(100) << setfill('*') << "" << endl; // Decorative line

    return 0;
}