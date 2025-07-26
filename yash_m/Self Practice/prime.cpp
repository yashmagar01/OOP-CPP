/* Write a program to findout is the number is orine or not*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    // Variable delcaration
    int number, i, isprime = 0;

    // Reading values from user
    cout << "Enter a number you want to check: ";
    cin >> number;

    // Cheking is the number prime or not by using conditional statements
    for (i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isprime = 1;
            break;
        }
    }

    // Printing the outputs
    if (isprime)
    {
        cout << number << " is not a prime number." << endl;
    }
    else{
        cout << number << " is prime." << endl;
    }

    return 0;
}