#include <iostream>
using namespace std;
int main()
{
    // declaration of the variables
    int a, b;
    float res;
    a = 21;
    b = 5;
    cout << " Implicit Type Casting: " << endl;
    cout << " Result: " << a / b << endl; // it loses some information

    cout << " \n Explicit Type Casting: " << endl;
    // use cast () operator to convert int data to float
    res = (float)21 / 5;
    cout << " The value of float variable (res): " << res << endl;

    return 0;
}
