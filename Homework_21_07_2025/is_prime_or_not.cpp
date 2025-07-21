/* Question 9: Create a function that takes an integer and returns 1 if the number is prime, 0 if it's not
 prime. A prime number is divisible only by 1 and itself. (Hint: Check divisibility from 2 to square root
 of the number)
  Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
#include <cmath>
using namespace std;

int prime(int number);

int main()
{
    // Variable Declaration
    int number;

    // Read the value for number
    cout << "Enter a number: ";
    cin >> number;

    prime(number);
    return 0;
}

int prime(int number)
{
    int if_prime = 0;

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            if_prime = 1;
            break;
        }
    }

    if (!if_prime)
    {
        cout << number << " is Prime." << endl;
    }
    else
    {
        cout << number << " is Composite." << endl;
    }

    return 0;
}