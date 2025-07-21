#include<iostream>
using namespace std;

int main(){
    //variable declaration
    int num1, num2;

    //Input from users 
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if(num1 > num2){
        cout << num1 <<" is largest.";
    }else{
        cout << num2 <<" is largest.";
    }

    return 0;
}