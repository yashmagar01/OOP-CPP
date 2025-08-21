/* 1. WAP to implement inheritance shown below figure. Assume suitable member function. 
    Name: yash ajay magar */

#include<iostream>
using namespace std;

// Base class
class Furniture
{
    public:
        string material;
        double price;

        void read()
        {
            cout <<"\nEnter Material of Furniture: ";
            cin >> material;
        }
};

class Table: public Furniture
{
    public:
        int height, surface_area;

        void read_table()
        {
            read(); // Inheriting base function
            cout << "Enter the height of table: ";
            cin >> height;
            cout << "Enter the surface area(in cm): ";
            cin >> surface_area;
        }
        void display()
        {
            cout << "\nMaterial = " << material << endl;
            cout << "Height = " << height << endl;
            cout << "Surface Area = " << surface_area;
        }
};

int main()
{   // Object creation
    Table t;

    t.read_table();
    t.display();

    return 0;

}