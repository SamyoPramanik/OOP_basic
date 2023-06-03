#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

const int SIZE = 10;

template <class AType = int, int size = 10>
class atype
{
    AType a[size];

public:
    atype()
    {
        register int i;
        for (i = 0; i < size; i++)
            a[i] = i;
    }

    AType &operator[](int i);
};

template <class AType, int size>
AType &atype<AType, size>::operator[](int i)
{
    if (i < 0 || i > size - 1)
    {
        cout << "Out of range" << endl;
        exit(1);
    }
    return a[i];
}

int main()
{
    atype<int, 100> intarray;
    atype<double> doublearray;
    atype<> defarray;

    int i;

    cout << "int array: ";
    for (i = 0; i < 100; i++)
        intarray[i] = i;
    for (i = 0; i < 100; i++)
        cout << intarray[i] << " ";
    cout << '\n';

    cout << "double array: ";
    for (i = 0; i < 10; i++)
        doublearray[i] = (double)i / 3;
    for (i = 0; i < 10; i++)
        cout << doublearray[i] << " ";
    cout << '\n';

    cout << "defarray array: ";
    for (i = 0; i < 10; i++)
        defarray[i] = i;
    for (i = 0; i < 10; i++)
        cout << defarray[i] << " ";
    cout << '\n';

    return 0;
}