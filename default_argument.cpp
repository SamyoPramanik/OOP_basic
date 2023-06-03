#include <iostream>
using namespace std;

void myfunc(double d = 9.0)
{
    cout << d << endl;
}

int main()
{
    myfunc(123.456);
    myfunc();
}