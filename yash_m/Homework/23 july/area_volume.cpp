#include <iostream>
using namespace std;

class area
{
public:
    //Required variables
    float num1, num2;

    //Required Functions
    float addition(float num1, float num2)
    {
        return num1 + num2 ;
    }

    float substraction(float num1, float num2)
    {
        return num1 - num2 ;
    }

    float multiply(float num1, float num2)
    {
        return num1 * num2 ;
    }

    float divide(float num1, float num2)
    {
        return num1 / num2 ;
    }

    int modulus(int num1, int num2)
    {
        if(num1 == 0 || num2 == 0)
        {
            printf("\nDivision by 0 is not allowed.");
            return 0;
        }
        return num1 % num2 ;
    }

};

int main()
{
    int choice, value1, value2;
    area ob1;

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
        cin >> choice;

        // Reading values from user

        if (choice >= 1 && choice <= 5)
        {
            cout << "\nEneter two values: ";
            cin >> value1 >> value2;
        }
        else
        {
            cout << "Thankyou for visiting";
        }

        // Using switch case
        switch (choice)
        {
        case 1:
            cout << "\nResult = " << ob1.addition(value1, value2) << endl;
            break;
        case 2:
            cout << "\nResult = " << ob1.substraction(value1, value2) << endl;
            break;
        case 3:
            cout << "\nResult = " << ob1.multiply(value1, value2) << endl;
            break;
        case 4:
            cout << "\nResult = " << ob1.divide(value1, value2) << endl;
            break;
        case 5:
            cout << "\nResult = " << ob1.modulus(value1, value2) << endl;
            break;
        }
    } while (choice != 6);
}