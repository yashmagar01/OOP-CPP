/* Calculate average of two numbers using explicit type casting
    Name: yash ajay magar */

#include <iostream>
using namespace std;

int main()
{
    int one, two;
    float avg;

    cout << "Enter two numbers: ";
    cin >> one >> two;

    avg = static_cast<float>(one + two) / 2;

    // Display the result
    cout << "\n------------------------------------------------------------------------" << endl;
    cout << "The two numbers you entered are: " << one << " and " << two << endl;
    cout << "Their accurate average is: " << avg << endl;
    cout << "------------------------------------------------------------------------" << endl;

    return 0;
}
