#include <iostream>
#include <cmath>
using namespace std;

void showflags()
{
    long f;
    long i;

    f = (long)cout.flags();

    for (i = 0x4000; i; i = i >> 1)
        if (i & f)
            cout << "1 ";
        else
            cout << "0 ";
    cout << endl;
}

int main()
{
    showflags();
    ios::fmtflags f = ios::showpos | ios::showbase | ios::oct | ios::right;
    cout.flags(f);
    cout << 10 << endl;
    showflags();

    f = ios::showpoint | ios::showpos;
    cout.flags(f);
    cout << 100.35 << endl;
    showflags();

    f = ios::showpoint | ios::left;
    cout.flags(f);
    showflags();
    cout.width(20);
    cout.precision(10);
    cout.fill('A');
    cout << acos(-1) << endl;
    showflags();

    cout.precision(6);
    cout << 100.344 << endl;
}