#include <iostream>
using namespace std;

class c1
{
    int i, j;

public:
    c1(int a, int b)
    {
        i = a;
        j = b;
    }
    int get_i() { return i; }
};

int main()
{
    c1 ob[3] = {{1, 2}, {2, 3}, {3, 4}};
    int i;

    for (i = 0; i < 3; i++)
        cout << ob[i].get_i() << endl;

    return 0;
}