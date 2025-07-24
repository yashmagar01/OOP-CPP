/* Question 6: Write a function that takes a character as parameter and returns 1 if it's a vowel, 0 if it's
a consonant. 
 Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

// Function Declaration
int abcd(char ch);

int main()
{
    // Variable Declaration
    char input;

    // Reading a singal character
    cout << "Enter a character(One singal Letter)(in lowercase): ";
    cin >> input;

    abcd(input);
    return 0;
}

int abcd(char ch)
{
    // Using conditional operators
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << ch << " is Vowel." << endl;
    }
    else
    {
        cout << ch << " is Consonant." << endl;
    }
}