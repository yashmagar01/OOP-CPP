/* Performe a program which demonstrate Singal inheritance
    Name: yash ajay magar */

#include <iostream>
using namespace std;

class Base
{
    int a;

public:
    int b;
    void set_ab();
    int get_a();
    void show_a();
};

class Derived : public Base
{
    int c;

public:
    void mul();
    void display();
};

int main()
{
    // Object creation
    Derived d1;

    d1.set_ab();
    d1.get_a();
    d1.show_a();
    d1.mul();
    d1.display();

    // Updating value of 'b' 
    d1.b = 10;
    cout << "\nBy updating value of b to 20 :-----" << endl;
    d1.mul();
    d1.show_a();
    d1.display();

    return 0;
}

void Base::set_ab()
{
    cout << "\nEnter the value of a,b: ";
    cin >> a >> b;
}

int Base::get_a()
{
    return a;
}

void Base::show_a()
{
    cout << "\nValue of a: " << a << endl;
}

void Derived::display()
{
    cout << "Value of b: " << b << endl;
    cout << "Value of c: " << c << endl;
}

void Derived::mul()
{
    // c = a * b;            ---This is Invalid

    c = b * get_a();
}