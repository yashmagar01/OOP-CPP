#include<iostream>
using namespace std;
int main(){
    //Variable declaration 
    int number;

    //Read the number
    cout << "Enter the number: ";
    cin >> number;

    //Check whether it is odd or even
    if(number % 2 == 0){
        cout << number << " is even.";
    }else{
        cout << number << " is odd.";
    }
    return 0;
}