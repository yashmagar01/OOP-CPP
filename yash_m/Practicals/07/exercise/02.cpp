/* WAP to create two classes test1 and test2 which stores marks of a student. Read value for
class objects and calculate average of two tests using friend function.
Name: yash ajay magar */

#include <iostream>
using namespace std;

class test2; // Forward declaration

class test1
{
    int marks1;

public:
    void input()
    {
        cout << "Enter marks of test1: ";
        cin >> marks1;
    }
    friend void avg(test1, test2); // Friend function
};

class test2
{
    int marks2;

public:
    void input()
    {
        cout << "Enter marks of test2: ";
        cin >> marks2;
    }
    friend void avg(test1, test2); // Friend function
};

void avg(test1 t1, test2 t2)
{
    float a = (t1.marks1 + t2.marks2) / 2.0;
    cout << "Average marks = " << a << endl;
}

int main()
{
    test1 t1;
    test2 t2;
    t1.input();
    t2.input();
    avg(t1, t2);
    return 0;
}
