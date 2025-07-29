/* Find the area of the rectangle by casting double data into float and int type.
Name: yash ajay magar
Roll no.: 24CO231 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declaring variables in double (first time :)
    double length, breadth, do_area;

    // Decalring int and float variables
    int in_area;
    float flo_area;

    cout << "\nEnter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    // Calculating area as a double
    do_area = length * breadth;

    // Type casting of double into int and float
    in_area = do_area;
    flo_area = do_area;

    // Printing the area as a double, int and float datatype
    cout << setw(60) << setfill('*') << "" << endl;
    cout << "Area of reactangle as a Double: " << do_area << endl;
    cout << "Area of rectagle as a flaot: " << flo_area << endl;
    cout << "Area of rectangle as a int: " << in_area << endl;
    cout << setw(60) << setfill('*') << "" << endl;

    return 0;
}