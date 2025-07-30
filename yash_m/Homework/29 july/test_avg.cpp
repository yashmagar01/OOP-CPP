/* Write a C++ program to create two classes  Test1  and  Test2  which store
marks of a student. Read values for class objects and calculate the average of two tests using a
friend function. The program should handle marks for two subjects: OOP (Object-Oriented
Programming) and DBMS (Database Management System)

Name: yash ajay magar */

#include <iostream>
using namespace std;

int main()
{
    class Test2;
    class Test1
    {
    private:
        float oopMarks;  // Private member to store OOP marks
        float dbmsMarks; // Private member to store DBMS marks

        void inputMarks()
        {
            cout << "\n===== Enter marks for Test 1 =====" << endl;
            cout << "Enter OOP marks (0-100): ";
            cin >> oopMarks;
            cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
            cout << "Enter DBMS marks (0-100): ";
            cin >> dbmsMarks;
            cout << "Invalid marks! Please enter marks between 0 and 100." << endl;
        }

        void displayMarks()
        {
            cout << "Test 1 Marks -> OOP: " << oopMarks << ", DBMS: " << dbmsMarks << endl;
        }

        // Friend function 
        friend void calculateAverage(Test1 &t1, Test2 &t2);
    };
};