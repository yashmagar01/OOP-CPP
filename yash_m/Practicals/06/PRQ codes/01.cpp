/* Write a C++ program to calculate area of Rectangle using Inline function.
Name: yash ajay magar */

#include <iostream>
using namespace std;

class rectangle
{
private:
    float lenght, breadth, area;

public:
    void read()
    {
        cout << "\nEnter Length and breadth of rectangle(in meters): ";
        cin >> lenght >> breadth;
    }
    inline float Area()
    {
        area = lenght * breadth;
    }
    void display()
    {
        cout << "\n----------------------------------------" << endl;
        cout << "Area of the rectangle is " << area << "sq meters";
        cout << "\n----------------------------------------" << endl;
    }
};

int main()
{
    // Object declaration
    rectangle s1;

    // Function calling
    s1.read();
    s1.Area();
    s1.display();

    return 0;
}