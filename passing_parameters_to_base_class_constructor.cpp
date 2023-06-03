#include <iostream>
using namespace std;

class base1
{
protected:
    int i;

public:
    base1(int x)
    {
        i = x;
        cout << "Constructing base1" << endl;
    }
    ~base1()
    {
        cout << "Destructing base1" << endl;
    }
};

class base2
{
protected:
    int j;

public:
    base2(int x)
    {
        j = x;
        cout << "Constructing base2" << endl;
    }
    ~base2() { cout << "Destructing base2" << endl; }
};

class derived : public base1, public base2
{
    int k;

public:
    derived(int x, int y, int z) : base1(x), base2(y)
    {
        k = z;
        cout << "Constructing derived" << endl;
    }

    ~derived() { cout << "Destructing derived" << endl; }
    void show()
    {
        cout << i << " " << j << " " << k << endl;
    }
};

int main()
{
    derived ob(3, 4, 5);

    ob.show();

    return 0;
}