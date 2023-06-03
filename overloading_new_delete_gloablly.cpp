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
};

void *operator new(size_t size)
{
    cout << "Default new overloaded" << endl;
    void *p = malloc(size);

    if (!p)
    {
        bad_alloc ba;
        throw ba;
    }

    return p;
}

void operator delete(void *p)
{
    free(p);
}

int main()
{
    loc *p1, *p2;
    float *f;

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

    try
    {
        f = new float;
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation error" << endl;
        return 1;
    }

    *f = 10.10F;

    cout << *f << endl;

    p1->show();
    p2->show();

    delete p1;
    delete p2;
    delete f;

    return 0;
}