#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

const int SIZE = 10;

template <class AType, int size>
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
    atype<int, 10> intob;
    atype<double, 15> doubleob;

    int i;

    cout << "integer array: ";
    for (i = 0; i < 10; i++)
        // intob[i] = i;
        intob.operator[](i) = i;
    for (i = 0; i < 10; i++)
        cout << intob[i] << " ";
    cout << endl;

    cout << "Double array: ";
    for (i = 0; i < 15; i++)
        // doubleob[i] = (double)i / 3;
        doubleob.operator[](i) = (double)i / 3;
    for (i = 0; i < 15; i++)
        cout << doubleob[i] << " ";
    cout << '\n';

    double num = doubleob.operator[](13);
    cout << num << endl;

    int *ptr = new int[100];

    for (int i = 0; i < 100; i++)
        ptr[i] = 2 * i + 2;

    for (int i = 50; i < 100; i++)
        cout << ptr[i] << " ";
    cout << endl;
    return 0;
}