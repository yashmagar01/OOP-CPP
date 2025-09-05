/* 2. Write a C++ program to implement following Multilevel Inheritance. 
    Name: yash ajay magar */

#include<iostream>
using namespace std;

class person
{
    public:
        string name, gender;
        int age;

        void read()
        {
            cout << "\nEnter your name: ";
            cin >> name;
            cout << "Enter your gender: ";
            cin >> gender;
            cout << "Enter your age: ";
            cin >> age;
        }
};

class employee:public person
{
    public: 
        int emp_id;
        string company;
        int salary;

        void read()
        {
            person::read();
            cout << "\nEnter Employee id, Company name and Salary: ";
            cin >> emp_id >> company >> salary;
        }
};

class programmer:public employee
{
    public:
        int no_of_prog_lang_known;

        void read()
        {
            employee::read();
            cout << "\nEnter the Programming Languages you known: ";
            cin >> no_of_prog_lang_known;
        }
        void display()
        {
            cout << "\nName: " << name;
            cout << "Gender: " << gender << " " << "Age: " << age << endl;
            cout << "Employee Id: " << emp_id << endl;
            cout << "Company Name: " << company << endl;
            cout << "Salaray: " << salary << endl;
            cout << "How many Programming Languages you know(Number): " << no_of_prog_lang_known << endl;
        }
};

int main()
{
    programmer p1;

    p1.read();
    p1.display();

    return 0;
}