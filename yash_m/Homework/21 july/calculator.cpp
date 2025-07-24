/* Question 11: Design and implement a Complete Calculator System using functions in C++.
Name: Yash Ajay Magar,
Roll No.: 24CO137 */

#include <iostream>
using namespace std;

class calculator
{
public:
    float addition(float a, float b)
    {
        return a + b;
    }
    float substraction(float a, float b)
    {
        return a - b;
    }
    float multiply(float a, float b)
    {
        return a * b;
    }
    float divide(float a, float b)
    {
        if (a == 0 || b == 0)
        {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }
        return a / b;
    }
    int modulus(int a, int b)
    {
        if (a == 0 || b == 0)
        {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }
        return a % b;
    }
};

int main()
{ // Declaring required objects
    calculator op1;

    // variable declaration
    float value1, value2;
    int choise;

    do
    {
        // Providing choise for selecting opearation
        cout << "\n\n===== CALCULATOR MENU =====" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Substraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Modulus (%)" << endl;
        cout << "6. Exit" << endl;

        // Reading choice
        cout << "\nEnter your choise from the Menu: ";
        cin >> choise;

        // Reading values from user

        if (choise >= 1 && choise <= 5)
        {
            cout << "\nEneter two values: ";
            cin >> value1 >> value2;
        }
        else
        {
            cout << "Thankyou for visiting";
        }

        // Using switch case
        switch (choise)
        {
        case 1:
            cout << "\nResult = " << op1.addition(value1, value2) << endl;
            break;
        case 2:
            cout << "\nResult = " << op1.substraction(value1, value2) << endl;
            break;
        case 3:
            cout << "\nResult = " << op1.multiply(value1, value2) << endl;
            break;
        case 4:
            cout << "\nResult = " << op1.divide(value1, value2) << endl;
            break;
        case 5:
            cout << "\nResult = " << op1.modulus(value1, value2) << endl;
            break;
        }
    } while (choise != 6);

    return 0;
}
