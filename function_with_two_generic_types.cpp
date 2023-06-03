#include <iostream>
using namespace std;

template <class type1, class type2>
void myfunc(type1 x, type2 y)
{
    cout << x << " " << y << endl;
    cout << sizeof(type1) << " " << sizeof(type2) << endl;
}

int main()
{
    myfunc(10, "I like C++");

    myfunc(98.6, 19L);

    return 0;
}