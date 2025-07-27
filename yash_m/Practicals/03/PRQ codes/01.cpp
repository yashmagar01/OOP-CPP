/* Calculate average of two numbers using explicit type casting
    Name: yash ajay magar */

#include <iostream>
using namespace std;

int main()
{
    //Variable Declaration
    int one, two;
    float avg;

    //Reading inputs
    cout << "Enter two numbers: ";
    cin >> one >> two;

    //Performing implicite typecasting
    avg = static_cast<float>(one + two) / 2;

    // Display the result
    cout << "\n------------------------------------------------------------------------" << endl;
    cout << "The two numbers you entered are: " << one << " and " << two << endl;
    cout << "There accurate average is: " << avg << endl;
    cout << "------------------------------------------------------------------------" << endl;

    return 0;
}
