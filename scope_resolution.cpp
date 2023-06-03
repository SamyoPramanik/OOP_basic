#include <iostream>
using namespace std;

int i;

void f()
{
    int i;

    i = 10; // local i

    ::i = 20; // global i

    cout << "local i=" << i << endl;
    cout << "global i=" << ::i << endl;
}

int main()
{
    f();
}