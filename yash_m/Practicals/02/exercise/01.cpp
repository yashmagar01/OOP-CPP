/*  Write a C++ Program which show the use of function outside the class using scope resolution operator. 
Name: yash ajay magar */

#include<iostream>
using namespace std;

class display
{
    public:
        void show();
};

int main()
{
    //Object creation
    display o1;

    //show function calling
    o1.show();

    return 0;
}

void display::show()
{
    cout << "\nThis line is printed by using funtion....." << endl;
}