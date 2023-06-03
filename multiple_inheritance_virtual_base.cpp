#include <iostream>
using namespace std;

class base1
{
public:
    int i;
};

class base2
{
public:
    int i;
};

class derived : public base1, public base2
{
public:
    int j;
    int sum;
};

int main()
{
    derived ob;
    ob.base1::i = 10;
    ob.j = 20;

    ob.sum = ob.base1::i + ob.j;

    cout << ob.base1::i << " " << ob.j << " " << ob.sum;
}