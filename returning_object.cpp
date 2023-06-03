#include <iostream>
using namespace std;

class myclass
{
    int i[4];

public:
    void set_i(int n)
    {
        for (int idx = 0; idx < 4; idx++)
            i[idx] = n;
    }
    int get_i() { return i[3]; }
};

myclass f();

int main()
{
    myclass o;
    o = f();

    cout << o.get_i() << endl;

    return 0;
}

myclass f()
{
    myclass x;
    x.set_i(10);
    return x;
}