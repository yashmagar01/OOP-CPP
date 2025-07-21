#include<iostream>
using namespace std;

int main(){
    //Variable declaration
    float principal, rate, time, interest;

    //Read values from user
    cout << "Enter the Principal amount: ";
    cin >> principal;
    cout << "Enter the rate of loan: ";
    cin >> rate;
    cout << "Enter the time taken to return the amount(in years): ";
    cin >> time;

    //Calculate the simple intrest 
    interest = (principal * rate * time)/100;

    //Display the simole intrest
    cout << "The simple interest is: " << interest;
    return 0;
}
