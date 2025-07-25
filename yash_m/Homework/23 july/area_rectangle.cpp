#include <iostream>
using namespace std;

float rect(float lenght, float breath)
{
    return lenght * breath;
}

int main()
{
    // Variable declaration
    float len, bre;

    // Reading required values
    cout << "Enter lenght and breath of rectangle: ";
    cin >> len >> bre;

    // Printing the area of rectangle
    cout << "Area of reactangle is: " << rect(len, bre);
    
    return 0;
}