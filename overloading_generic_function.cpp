#include <iostream>
using namespace std;

template <class X>
void swapargs(X &a, X &b)
{
    X temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside template swapargs" << endl;
}

void swapargs(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside swapargs int specialization.\n";
}

int main()
{
    int i = 10, j = 20;
    double x = 10, y = 23.3;
    char a = 'x', b = 'y';

    cout << "Original i, j: " << i << ' ' << j << '\n';
    cout << "Original x, y: " << x << ' ' << y << '\n';
    cout << "Original a, b: " << a << ' ' << b << '\n';

    swapargs(i, j);
    swapargs(x, y);
    swapargs(a, b);

    cout << "Swapped i, j: " << i << ' ' << j << '\n';
    cout << "Swapped x, y: " << x << ' ' << y << '\n';
    cout << "Swapped a, b: " << a << ' ' << b << '\n';
}