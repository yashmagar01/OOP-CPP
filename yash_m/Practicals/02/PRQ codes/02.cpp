/* Format the following statement using manipulators.
    Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int Rate = 412345, period = 35, year = 2024;

    cout << setw(8) << Rate << endl; 
    cout << setw(8) << period << endl;
    cout << setw(8) << year << endl;
    return 0;
}