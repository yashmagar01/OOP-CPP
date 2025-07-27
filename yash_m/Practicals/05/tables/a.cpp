#include <iostream>
using namespace std;

struct X
{
    int a, b; // member function declaration
    int add();
};

// global variable
int a = 10;

// define member function outside class
int X::add() { return a + b; }

int main()
{
    int answer;
    X xobject;
    xobject.a = 1;
    xobject.b = 2;
    answer = xobject.add();
    cout << xobject.a << " + " << xobject.b << " = " << answer << endl;
}