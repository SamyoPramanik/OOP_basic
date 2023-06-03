#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p;

    try
    {
        p = new int;
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation Failure" << endl;
        return 1;
    }

    *p = 100;

    cout << "At " << p << " is the value " << *p << endl;

    delete p;

    return 0;
}