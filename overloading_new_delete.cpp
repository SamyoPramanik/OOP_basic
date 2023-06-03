#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {}

    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }

    void show()
    {
        cout << longitude << " " << latitude << endl;
    }

    friend loc operator+(loc op1, int op2);
    friend loc operator+(int op2, loc op1);

    void *operator new(size_t size);
    void operator delete(void *p);
};

void *loc::operator new(size_t size)
{
    void *p;

    cout << "In overloaded new" << endl;
    p = malloc(size);
    if (!p)
    {
        bad_alloc ba;
        throw ba;
    }

    return p;
}

void loc::operator delete(void *p)
{
    cout << "In overloaded delete" << endl;
    free(p);
}

loc operator+(loc op1, int op2)
{
    op1.longitude += op2;
    op1.latitude += op2;
    return op1;
}

loc operator+(int op2, loc op1)
{
    op1.longitude += op2;
    op1.latitude += op2;
    return op1;
}

int main()
{
    loc *p1, *p2;

    try
    {
        p1 = new loc(10, 20);
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error" << endl;
        return 1;
    }

    try
    {
        p2 = new loc(-10, -20);
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error" << endl;
        return 1;
    }

    p1->show();
    p2->show();

    delete p1;
    delete p2;

    return 0;
}