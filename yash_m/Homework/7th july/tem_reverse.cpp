#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit; // Declare temperature variables

    // Read Celsius temperature from user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit;
    
    return 0;
}