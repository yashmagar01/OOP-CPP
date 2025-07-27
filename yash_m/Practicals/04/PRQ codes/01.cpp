/* Define a class Room with data members length, breadth and height. Member function
calculate_area () and calculate_volume(). Calculate the area and volume of room. Define the
member function inside the class.
 Name: yash ajay magar */

#include <iostream>
using namespace std;

// Class Declaration
class Room
{
public:
    // Required data members
    float lenght, breadth, height;

    // Required member functions
    float calculate_area(float lenght, float breadth)
    {
        return lenght * breadth;
    }
    float calculate_volume(float lenght, float breadth, float height)
    {
        return lenght * breadth * height;
    }
};

int main()
{
    // Object declaration
    Room n1;

    // Variable Declaration
    float a, b, c;

    // Reading values of H, B, L
    cout << "\nEnter the Lenght of Room(in meters): ";
    cin >> a;

    cout << "\nEneter the breadth of Room(in meters): ";
    cin >> b;

    cout << "\nEnter the Height of Room(in meters): ";
    cin >> c;

    // Printing the results
    cout << "\n-----------------------------------------------------" << endl;
    cout << "Area of Room is " << n1.calculate_area(a, b) << " sq meters" << endl;
    cout << "Volume of Room is " << n1.calculate_volume(a, b, c) << " cubic meters";
    cout << "\n-----------------------------------------------------" << endl;

    return 0;
}