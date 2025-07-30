/* Write a program to calculate square of number in which define class and define member
function inside the class as per requirement.
Name: yash ajay magar */

#include <iostream>
using namespace std;

class Square
{
public:
    int num;
    void getNumber()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
    void showSquare()
    {
        cout << "Square is: " << num * num << endl;
    }
};

int main()
{
    Square s;
    s.getNumber();
    s.showSquare();
    return 0;
}
