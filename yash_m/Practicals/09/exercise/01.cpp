/* Write a C++ program to declare class ‘Account’ having data members as Account_No and
Balance. Accept this data for 10 accounts and display data of Accounts having balance greater
than 10000.
    Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

class Account
{
    int Account_No;
    double Balance;

public:
    void read(int a)
    {
        Account_No = a;
        cout << "\nEnter Balance of Account no. " << Account_No << ": ";
        cin >> Balance;
    }

    void display(int a)
    {
        Account_No = a;
        cout << "\nAccount No. " << Account_No << ": " << " Balance = " << Balance << endl;
    }
};

int main()
{
    // required variable declaration
    int i, input;

    // Object creation as a array of object
    Account arr[15];

    // Reading how many entries user want to insert
    cout << "\nEnter how many entries u want to do: ";
    cin >> input;

    for (i = 1; i <= input; i++)
    {
        arr[i].read(i);
    }

    cout << setw(50) << setfill('*') << " ";
    for (i = 1; i <= input; i++)
    {
        arr[i].display(i);
    }
    cout << setw(50) << setfill('*') << " " << endl;

    return 0;
}
