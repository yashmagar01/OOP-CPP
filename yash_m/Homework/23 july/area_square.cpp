#include <iostream>
using namespace std;

inline float square(float side)
{
    return side * side;
}

int main()
{
    // Variable Declaration
    float side;

    // Reading value of side
    cout << "Enter the value of side: ";
    cin >> side;

    // Printing the Area
    cout << "Area of square is: " << square(side);

    return 0;
}