/* Write a program to create the memory using new operator and free the created memory using delete
operator.
Name: yash ajay magar
Roll no.: 25CO231 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Creating memory for a interger using "new" operator
    int *ptr = new int;

    // Assining 900 to *ptr pointer
    *ptr = 900;

    // printing the value of *ptr
    cout << setw(40) << setfill('*') << "" << endl;
    cout << "The value of *ptr is " << *ptr << endl;
    cout << setw(40) << setfill('*') << "" << endl;

    // Deleting the assigned space for *ptr
    delete ptr;

    return 0;
}
