#include <iostream>
using namespace std;

void neg(int &i);

int main()
{
    int x;

    x = 10;
    cout << x << " negeated is ";
    neg(x);
    cout << x << endl;
}

void neg(int &i)
{
    i = -i;
}