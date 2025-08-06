/* WAP to declare class time having data members as hrs, min,sec. Write a constructor
to accept data and display for two objects.
    Name: yash ajay magar */

#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    int hrs, min, sec;

public:
    Time(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;

        cout << "\nEntered Time:\t";
        cout << hrs << " : " << min << " : " << sec << endl;
    }
};

int main()
{
    // Required variable creation
    int h, m, s;

    // Reading Time from user
    cout << "\nEnter hours: ";
    cin >> h;
    cout << "Enter Minutes: ";
    cin >> m;
    cout << "Enter seconds: ";
    cin >> s;

    // Object creation OR Constructor calling
    Time(h, m, s);
    return 0;
}