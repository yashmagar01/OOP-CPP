#include <iostream>
using namespace std;

// Declaration of the class
class MyClass
{
public:
    void myFunction(); // Function prototype declaration inside the class
};

// Definition of the function outside the class
void MyClass::myFunction()
{
    cout << "This is myFunction() defined outside the class." << std::endl;
}

int main()
{
    MyClass obj;
    obj.myFunction(); // Call the function
    return 0;
}