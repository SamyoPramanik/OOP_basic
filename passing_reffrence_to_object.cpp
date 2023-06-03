#include <iostream>
using namespace std;

class c1
{
    int id;

public:
    int i;
    c1(int i);
    ~c1();
    void neg(c1 &o) { o.i = -o.i; }
};

c1::c1(int num)
{
    cout << "Constructing " << num << endl;
    id = num;
}

c1::~c1()
{
    cout << "Destructing " << id << endl;
}

int main()
{
    c1 o(1), p(2);

    o.i = 10;
    p.i = 20;
    o.neg(p);

    cout << p.i << endl;
}