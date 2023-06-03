#include <iostream>
using namespace std;

template <class x>
void f(x a)
{
    cout << "Inside f(x a)" << endl;
}

template <class x>
void f(x a, x b)
{
    cout << "Inside f(x a,x b)" << endl;
}

int main()
{
    f(10);
    f(10, 20);

    return 0;
}