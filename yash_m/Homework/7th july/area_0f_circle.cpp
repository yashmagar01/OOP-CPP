#include <iostream>
using namespace std;

int main()
{
    float radius, area; // Declare variables for radius and area

    // Read radius from user
    cout << "Enter radius of circle: ";
    cin >> radius;

    // Calculate area using formula: Area = 3.14 * r * r
    area = 3.14 * radius * radius;

    // Display the result
    cout << "Area of circle: " << area;
    
    return 0;
}