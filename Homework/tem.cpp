#include <iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius; // Declare temperature variables

    // Read Fahrenheit temperature from user
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    cout << "Temperature in Celsius: " << celsius;

}