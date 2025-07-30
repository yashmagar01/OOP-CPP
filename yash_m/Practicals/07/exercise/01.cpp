/* Write a C++ program to exchange the values of two variables using friend function.
Name: yash ajay magar */

#include <iostream>
using namespace std;

class Swap
{
    int a, b;

public:
    void getData()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void showData()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
    friend void exchange(Swap &); // Friend function
};

void exchange(Swap &s)
{
    int temp = s.a;
    s.a = s.b;
    s.b = temp;
}

int main()
{
    Swap obj;
    obj.getData();
    cout << "Before swapping: ";
    obj.showData();

    exchange(obj);

    cout << "After swapping: ";
    obj.showData();
    return 0;
}
