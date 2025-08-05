/* WAP to implement default constructor that initializes num1 and num2 as 10 and 20 and prints
the values of num1 and num2.
    Name: yash ajay magar */

#include <iostream>
using namespace std;

// Creating a class
class def_cons
{
    // Declaring num1 and num2 variables
    int num1, num2;

public:
    def_cons(int a, int b)
    {
        // assining a,b to num1 and num2
        num1 = a;
        num2 = b;
    }

    void display()
    {
        cout << "\nValue of num1 = " << num1 << endl;
        cout << "Value of num2 = " << num2 << endl;
    }
};

int main()
{
    // Creating object
    def_cons y(10, 20);

    y.display();

    return 0;
}