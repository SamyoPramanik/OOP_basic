#include <iostream>
using namespace std;

class c1
{
    int i;

public:
    c1(int j) { i = j; }
    c1() { i = 0; }
    void set_i(int j) { i = j; }
    int get_i() { return i; }
};

int main()
{
    c1 ob[3];
    int i;

    for (i = 0; i < 3; i++)
        ob[i].set_i(i + 1);

    for (i = 0; i < 3; i++)
        cout << ob[i].get_i() << endl;

    return 0;
}