/* Write a program to findout prime number from a specific range*/

#include <iostream>
using namespace std;

int main()
{
    // Variable delcaration
    int start, end, number, isprime = 0, i, j;
    int size, current_prime = 0;
    int list[100];

    // Reading the range
    cout << "\nEnter the starting number of range: ";
    cin >> start;

    cout << "\nEnter the last number of range: ";
    cin >> end;

    // Finding prime number by using conditional operators
    for (i = start; i <= end; i++)
    {
        isprime = 0;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 1;
            }
        }
        if (!isprime)
        {
            list[current_prime++] = i;
        }
    }

    // Printing output
    cout << "\nThe prime numbers in the range of " << start << " to " << end << " are: ";
    for (i = 0; i < current_prime; i++)
    {
        cout << list[i] << " ";
    }

    return 0;
}