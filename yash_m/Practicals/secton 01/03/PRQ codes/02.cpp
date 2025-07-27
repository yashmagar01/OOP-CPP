/* Write a program which display the percentage of students which accept marks of three
subjects  from user.(Show the use of Implicit type casting)
Name: yash ajay magar */

#include <iostream>
using namespace std;

int main()
{
    // Variable declaration
    int sub1, sub2, sub3, total;

    // Reading the marks
    cout << "\nEnter the marks in three subjects: ";
    cin >> sub1 >> sub2 >> sub3;

    cout << "\nEnter total marks: ";
    cin >> total;

    // Performing implicite typecasting
    float per = ((sub1 + sub2 + sub3) / (float)total) * 100;

    // Printing outputs
    cout << "\n**********************" << endl;
    cout << "You scored: " << per << " %";
    cout << "\n**********************" << endl;

    return 0;
}