/* Write a program which show the use of implicit type casting to calculate the average of
two number
Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // variable delcaration
    float a, b;
    double avg;

    // Reading the values
    cout << "\nEnter two values: ";
    cin >> a >> b;

    // Calculating avg
    avg = (a + b) / 2;

    // Decarating outputs
    cout << setw(25) << setfill('*') << "" << endl;
    cout << "Avarage is " << avg << endl;
    cout << setw(25) << setfill('*') << "";
    return 0;
}