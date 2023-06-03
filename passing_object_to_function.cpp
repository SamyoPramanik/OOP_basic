#include <iostream>
using namespace std;

class myclass
{
    int i;

public:
    myclass(int n);
    myclass(myclass &a)
    {
        i = a.i;
        cout << "Coping " << i << endl;
    }

    ~myclass();
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

myclass::myclass(int n)
{
    i = n;
    cout << "Constracting " << i << endl;
}

myclass::~myclass()
{
    cout << "Destroying " << i << endl;
}

void f(myclass ob);

int main()
{
    myclass o(1);
    f(o);
    cout << "This is i in main: ";
    cout << o.get_i() << "\n";
}

void f(myclass ob)
{
    ob.set_i(2);
    cout << "This is local i: " << ob.get_i();
    cout << "\n";
}