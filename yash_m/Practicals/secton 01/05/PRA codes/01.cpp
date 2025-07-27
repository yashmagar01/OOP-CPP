/* Write a program to find area of circle such that the class circle must have three functions
namely:
      a)read() to accept the radius from user.
      b)compute() for calculating the area
      c)display() for displaying the result.(Use Scope resolution operator)
Name: yash ajay magar */

#include <iostream>
using namespace std;

// Declaring pi as a constant
const float pi = 3.14159265359;

// Class Declaration
class circle
{
private:
    float radius, area;

public:
    void read(float r);
    float compute();
    void display();
};

int main()
{
    // Obeject declaration
    circle c1;

    // Variable delcaration
    float radius;

    // Reading radius
    cout << "\nEnter the radius(in meters): ";
    cin >> radius;

    // Function calling
    c1.read(radius);
    c1.compute();
    c1.display();

    return 0;
}

void circle::read(float r)
{
    radius = r;
}

float circle::compute()
{
    area = radius * radius * pi;
    return area;
}

void circle::display()
{
    cout << "\n--------------------------------------------" << endl;
    cout << "Area of the circle is " << area << " sq meters";
    cout << "\n--------------------------------------------" << endl;
}