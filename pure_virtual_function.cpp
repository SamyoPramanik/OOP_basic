#include <iostream>
using namespace std;

class number
{
protected:
    int val;

public:
    void setval(int i) { val = i; }

    virtual void show() = 0;
};

class hextype : public number
{
public:
    void show()
    {
        cout << hex << val << endl;
    }
};

class dectype : public number
{
public:
    void show()
    {
        cout << val << endl;
    }
};

class octtype : public number
{
public:
    void show()
    {
        cout << oct << val << endl;
    }
};

int main()
{
    dectype d;
    hextype h;
    octtype o;

    d.setval(150);
    d.show();

    h.setval(255);
    h.show();

    o.setval(20);
    o.show();
}