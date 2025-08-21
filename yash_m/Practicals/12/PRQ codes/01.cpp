/* 1.  Write a C++ program to calculate the area and perimeter of rectangles 
using concept of inheritance. 
    Name: yash ajay magar */

#include<iostream>
using namespace std;

class Area
{
    public:
        float area(float l, float b)
        {
            return l * b;
        }
};

class parameter
{
    public:
        float para(float l, float b)
        {
            return (l + b) * 2;
        }
};

class rectangle:public Area, public parameter
{
    public:
        float length, breadth;

        void read()
        {
            cout << "\nEnter Length and Breadth of rectangle: ";
            cin >> length >> breadth;
        }
        void display()
        {
            cout << "\nArea = " << Area::area(length, breadth) << " Sqaure Units" << endl;
            cout << "Parameter = " << parameter::para(length, breadth) << " Sqaure Units" << endl;
        }

};

int main()
{
    rectangle r1;

    r1.read();
    r1.display();

    return 0;
}