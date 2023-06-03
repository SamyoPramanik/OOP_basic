#include <iostream>
using namespace std;

class c1
{
    int i;

public:
    c1(int a)
    {
        i = a;
    }

    int get_i() { return i; }
};

int main()
{
    c1 ob(88), *p;
    p = &ob;

    cout << p->get_i() << endl;

    return 0;
}