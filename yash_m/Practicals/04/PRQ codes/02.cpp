/* Define a class mean in which assign two numbers in assign member function (i.e. 
assign(4,8)) passed value from main function and define assign member function inside the 
class and display the mean of two number on output screen. 
Name: yash ajay magar*/

#include<iostream>
using namespace  std;

class mean
{
    public:
        int assign(int a, int b)
        {
            return (a + b) / 2;
        }
};

int main()
{
    // Object declaration
    mean first;

    // Variable Declaration
    int a, b;

    // reading values
    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    // Function Calling and Output printing 
    cout << "\n------------------------------------------" << endl;
    cout << "Mean of " << a << " and " << b << " is " <<  first.assign(a, b);
    cout << "\n------------------------------------------" << endl;


    return 0;
}