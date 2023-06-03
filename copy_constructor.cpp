#include <iostream>
#include <new>
#include <cstdlib>
using namespace std;

class Array
{
    int *p;
    int size;

public:
    Array(int sz)
    {
        try
        {
            p = new int[sz];
        }
        catch (bad_alloc xa)
        {
            cout << "Allocation failed.." << endl;
            exit(1);
        }
        size = sz;
    }

    ~Array() { delete[] p; }

    // copy constructor
    Array(const Array &a);

    void put(int i, int j)
    {
        if (i >= 0 && i <= size)
            p[i] = j;
    }

    int get(int i) { return p[i]; }

    void printArray(Array a)
    {
        for (int i = 0; i < a.size; i++)
            cout << a.get(i) << " " << a.p[i] << endl;
    }
};

Array::Array(const Array &a)
{
    try
    {
        p = new int[a.size];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failed.." << endl;
    }

    for (int i = 0; i < a.size; i++)
        p[i] = a.p[i];

    size = a.size;
}

int main()
{
    Array num(10);

    for (int i = 0; i < 10; i++)
        num.put(i, i);

    for (int i = 9; i >= 0; i--)
        cout << num.get(i) << " ";

    cout << endl;

    Array x = num;

    x.printArray(num);

    for (int i = 0; i < 10; i++)
        cout << x.get(i) << " ";
    cout << endl;

    for (int i = 0; i < 10; i++)
        num.put(i, 2 * i);

    for (int i = 9; i >= 0; i--)
        cout << num.get(i) << " ";

    cout << endl;

    for (int i = 0; i < 10; i++)
        cout << x.get(i) << " ";
    cout << endl;

    return 0;
}