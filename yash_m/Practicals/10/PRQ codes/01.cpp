/*WAP to declare a class student having datamembers as name and percentage .Write
constructor to initialise these data members. Accept and display data for one object.
    Name: yash ajay magar */

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

class Result
{
    char name[20];
    float percentage;

public:
    // Creating a constructor to initialise data memebers
    Result(char n[], float p)
    {
        strcpy(name, n);
        percentage = p;
    }
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Percentange: " << percentage << endl;
    }
};

int main()
{
    // Object Creation
    Result y("Yash Magar", 89.12);

    y.display();

    return 0;
}