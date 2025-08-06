/*  Write a Program to declare a class birthday having data member day, month and year.
Accept this info for object using pointer to array of object and display it.
    Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

class Birthday
{
    // Declaring day, month and year data members
    int day, month, year;

public:
    void read()
    {
        cout << "\nEnter the Date Of Birth(dd-mm-yy): ";
        cin >> day >> month >> year;
    }

    void display()
    {
        cout << "\nEntered Birth Dates: " << endl;
        cout << day << " / " << month << " / " << year << endl;
    }
};

int main()
{
    // Required variable declaration
    int i, input;

    // Creatings Array of objects
    Birthday arr[20];

    // Reading how much values user want to insert
    cout << "\nHow many entries you want to insert: ";
    cin >> input;

    // Creating a pointer which points to the arrays
    Birthday *p = arr;

    for (i = 0; i < input; i++)
    {
        p[i].read();
    }

    cout << setw(50) << setfill('*') << " ";
    for (i = 0; i < input; i++)
    {
        p[i].display();
    }
    cout << setw(50) << setfill('*') << " ";
}