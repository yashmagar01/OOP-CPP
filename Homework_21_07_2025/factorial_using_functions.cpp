/* Question 8: Write a function that takes an integer as parameter and returns the factorial of that
number. Handle the case for 0! = 1.
 Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

int factorial(int number);

int main()
{
    // Variable Declaration
    int number, result;

    // Reding the number
    cout << "Enter a number: ";
    cin >> number;

    factorial(number);

    result = factorial(number);

    cout << "Factorial of " << number << " is: " << result;
    return 0;
}

int factorial(int number)
{
    if (number == 0 || number == 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}