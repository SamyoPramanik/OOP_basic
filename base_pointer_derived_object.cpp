#include <iostream>
using namespace std;

class base
{
    int i;

public:
    void set_i(int a) { i = a; }
    int get_i() { return i; }
};

class derived : public base
{
    int j;

public:
    void set_j(int b) { j = b; }
    int get_j() { return j; }
};

int main()
{
    base *bp;
    derived d;
    bp = &d;

    bp->set_i(10);
    cout << bp->get_i() << " ";

    ((derived *)bp)->set_j(20);
    cout << ((derived *)bp)->get_j();
}