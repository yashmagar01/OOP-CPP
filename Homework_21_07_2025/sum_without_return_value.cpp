/* Question 2: Create a function with parameters but no return value that takes two integers as
input and displays their sum.
 Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

// Function Declaration
void sum(int x, int y);

int main()
{
    // Variable Declaration
    int a, b;

    // Reading values
    cout << "Enter two values: ";
    cin >> a >> b;

    // Function Calling
    sum(a, b);

    return 0;
}

void sum(int x, int y)
{
    cout << "Sum = " << x + y << endl;
}