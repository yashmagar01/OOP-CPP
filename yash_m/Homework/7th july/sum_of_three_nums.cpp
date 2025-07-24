#include<iostream>
using namespace std;

int main(){
    //Variable declaration
    int num1, num2, num3, sum;

    //Read the numbers from user 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    //Performing addition of three numbers
    sum = num1 + num2 + num3;

    //Disply the result
    cout << "The addtion of three numbers are: " << sum;
    
    return 0;
}