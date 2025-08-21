/* Write a Program to get the average marks of six subjects using Multiple Inheritance.
Name: yash ajay magar */
#include <iostream>
#include <iomanip>
using namespace std;

class theory
{
public:
    double m1, m2, m3, m4;
    void accept_theory()
    {
        cout << "Enter 4 theory marks: ";
        cin >> m1 >> m2 >> m3 >> m4;
    }
};
class lab
{
public:
    double p1, p2;
    void accept_lab()
    {
        cout << "Enter 2 practical marks: ";
        cin >> p1 >> p2;
    }
};
class result : public theory, public lab
{
public:
    double avg;
    void compute()
    {
        avg = (m1 + m2 + m3 + m4 + p1 + p2) / 6.0;
    }
    void display() const
    {
        cout << fixed << setprecision(2);
        cout << "Average Marks: " << avg << "\n";
    }
};
int main()
{
    result r;
    r.accept_theory();
    r.accept_lab();
    r.compute();
    r.display();
    return 0;
}