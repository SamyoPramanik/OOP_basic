#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p, i;

    try
    {
        p = new int[10];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failed.." << endl;
    }

    for (int i = 0; i < 10; i++)
        p[i] = i;

    for (int i = 0; i < 10; i++)
        cout << p[i] << endl;

    delete[] p;

    return 0;
}