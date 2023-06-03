#include <iostream>
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
    cout.setf(ios::showpoint | ios::showpos);
    cout << 100.0 << endl;
    showflags();

    cout.setf(ios::uppercase | ios::scientific);
    cout << 100.12 << endl;
    showflags();

    cout.unsetf(ios::uppercase | ios::showpoint | ios::showpos);
    cout << 100.12 << endl;
    showflags();

    cout.setf(ios::showpoint, ios::showpoint | ios::scientific);
    cout << 100.0 << endl;
    showflags();

    cout.setf(ios::hex, ios::basefield);
    cout << 100 << endl;
    showflags();

    return 0;
}