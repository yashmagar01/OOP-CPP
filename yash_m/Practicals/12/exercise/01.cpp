/* Multiple Inheritance demo: combine two bases into a result.
Name: yash ajay magar */
#include <iostream>
using namespace std;

class Base1
{
public:
    int a;
    void acceptA()
    {
        cout << "\nEnter A: ";
        cin >> a;
    }
    void showA() { cout << "A = " << a << endl; }
};

class Base2
{
public:
    int b;
    void acceptB()
    {
        cout << "Enter B: ";
        cin >> b;
    }
    void showB() { cout << "B = " << b << endl; }
};

class Result : public Base1, public Base2
{
public:
    int sum;
    void compute() { sum = a + b; }
    void show() { cout << "Sum = " << sum << endl; }
};

int main()
{
    Result r;
    r.acceptA();
    r.acceptB();
    r.compute();
    cout << "\n--- Output ---\n";
    r.showA();
    r.showB();
    r.show();
    return 0;
}