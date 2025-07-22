/* Question 10: Write a function that takes an integer and returns the reverse of that number. For
 example, if input is 1234, output should be 4321. 
 Name: Yash Ajay Magar,
 Roll No.: 24CO137 */

#include <iostream>
using namespace std;

int reverse(int number);

int main(){
    // Variable Declaration
    int number;

    // Reading a value
    cout << "Enter a number: ";
    cin >> number;

    cout << "\nEntered Number: " << number << endl;

    reverse(number);

    cout << "Reversed Number: " << reverse(number) << endl;
    return 0;
}

int reverse(int number){
    int reverse = 0;
    while (number != 0)
    {
        int digit = number % 10; // 1234 / 10 = 4
        reverse = reverse * 10 + digit; // 0 * 10 + 4 = 4
        number = number / 10; // 1234 / 10 = 123
    }
    
    return reverse;
}