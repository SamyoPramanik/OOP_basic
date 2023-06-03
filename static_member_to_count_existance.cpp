#include <iostream>
using namespace std;

class Counter
{
public:
    static int count;
    Counter() { count++; }
    ~Counter() { count--; }
};

int Counter::count;

void f();

int main()
{
    Counter o1;
    cout << "Object in existance: " << Counter::count << endl;

    Counter o2;
    cout << "Object in existance: " << Counter::count << endl;

    f();
    cout << "Object in existance: " << Counter::count << endl;

    return 0;
}

void f()
{
    Counter temp;
    cout << "Object in existance: " << Counter::count << endl;
}