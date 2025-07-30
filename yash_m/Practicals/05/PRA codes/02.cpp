/*  Define a class complex with data members real and imaginary, member function read() 
and write(). Write a program to perform the addition of two complex number and display the 
result. 
Name: Srushti Sidram salunke */

#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    void read();              
    void write();             
    void add(Complex, Complex); 
};

void Complex::read() {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::add(Complex c1, Complex c2) {
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
}


void Complex::write() {
    cout << "\nSum = " << real << " + " << imag << "i" << endl;
}

// Main function
int main() {
    Complex c1, c2, result;

    cout << "\nEnter first complex number:" << endl;
    c1.read();

    cout << "\nEnter second complex number:" << endl;
    c2.read();

    result.add(c1, c2);  

    result.write();       //Display result

    return 0;
}