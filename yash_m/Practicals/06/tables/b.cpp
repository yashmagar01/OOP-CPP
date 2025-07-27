#include <iostream> 
using namespace std;

class Sample
{
public:
    inline void myfun();
};
void inline Sample::myfun()
{
    cout << "Hello from inline function";
}

int main()
{
    Sample S;

    S.myfun();
    return 0;
}
