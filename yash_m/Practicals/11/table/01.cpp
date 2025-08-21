#include <iostream>
using namespace std;

class Base 
{ 
public : 
    Base() {}
    ~Base() {}

protected:
private:
};

class Derived : public Base
{
public:
    Derived() {}
    Derived() {}

private:
protected:
};

void main()
{ 
        cout << "The program exceuted" << endl;
}