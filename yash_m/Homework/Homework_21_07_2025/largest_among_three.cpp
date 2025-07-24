/* Question 7: Create a function that takes three integers as parameters and returns the largest
 among them. Write a main function to test it with user input.
  Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

// Function Declaration
int numbers(int a, int b, int c);

int main()
{
    // Variable Declaration
    int x, y, z;

    // Read the three values
    cout << ("Enter three values: ");
    cin >> x >> y >> z;

    // Function call
    numbers(x, y, z);
    return 0;
}

int numbers(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is Greater then other two" << endl;
    }
    else if (b > a && b >> c)
    {
        cout << b << " is Greater then other two" << endl;
    }
    else if (c > a && c > b)
    {
        cout << c << " is Greater then other two" << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "Two or more numbers are similar..... so, Neet inputs de !! :)" << endl;
    }
    else
    {
        cout << "Invalid inout, provide inputs in integer datatype...." << endl;
    }
}