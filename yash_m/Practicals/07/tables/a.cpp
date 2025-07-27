/* How many member functions are
there in this C++ class excluding
constructors and destructors? */

class Box
{
    int capacity;

public:
    void print();
    friend void show();
    bool compare();
    friend bool lost();
};