/* Question 5: Create a function that takes a number as parameter and checks if it's positive, negative,
or zero. Display the result (no return value needed).
 Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

// Function Declaration
void num_check(int number);

int main()
{
    // Variable Declaration
    int number;

    // Reading the value
    cout << "Enetr a number: ";
    cin >> number;

    num_check(number);
    return 0;
}

void num_check(int number)
{
    // Conditiional Operators
    if (number > 0)
    {
        cout << number << " is Postive." << endl;
    }
    else if (number < 0)
    {
        cout << number << " is Negative." << endl;
    }
    else if (number == 0)
    {
        cout << number << " is Zero." << endl;
    }
    else
    {
        cout << "Invalid input, Provide integers datatypes...." << endl;
    }
}