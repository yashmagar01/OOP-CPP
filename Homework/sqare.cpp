#include<iostream>
using namespace std;

int main(){
    //Variable declration
    int number, square;

    //Reading the number
    cout << "Enter the number: ";
    cin >> number;

    //Performing square
    square = number * number;

    //Display the result
    cout << "The square of " << number << " is: " << square;

    return 0;
}