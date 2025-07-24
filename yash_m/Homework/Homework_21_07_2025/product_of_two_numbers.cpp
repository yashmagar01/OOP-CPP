/* Question 4: Develop a function with parameters and return value that takes two numbers and
returns their product.
 Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

int product(int a, int b);

int main()
{
    // Variable Declaration
    int num1, num2;

    // Reading the values
    cout << "Enter two values: ";
    cin >> num1 >> num2;

    // FUnction Calling
    product(num1, num2);

    // Printing returning value
    cout << "Product = " << product(num1, num2);
    return 0;
}

int product(int a, int b)
{
    return a * b;
}