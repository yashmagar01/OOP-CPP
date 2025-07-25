#include <iostream>
using namespace std;

float triangle(float h, float b)
{
    return 0.5 * (h * b);
}

int main()
{
    // variable declaration
    float height, base;

    // Reading required values
    cout << "Enter Height and Base of triangle: ";
    cin >> height >> base;

    // Function calling
    cout << "Area of circle is: " << triangle(height, base) << endl;
    return 0;
}