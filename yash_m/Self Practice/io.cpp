// 1. Header Files
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// 2. Class Declaration (if any)
class MyClass
{
private:
    int data;

public:
    void setData(int x)
    {
        data = x;
    }

    int getData()
    {
        return data;
    }
};

#include <iostream>
using namespace std;

int main()
{
    MyClass obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    obj.setData(num);

    cout << "You entered: " << obj.getData() << endl;

    cout << setw(10) << "Name" << setw(5) << "Age" << endl;
    cout << setw(10) << "yash" << setw(5) << 17 << endl;
    cout << fixed << setprecision(2) << 3.14159 << endl; // Shows 3.14

    return 0;
}
