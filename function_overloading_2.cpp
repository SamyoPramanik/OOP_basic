#include <iostream>
using namespace std;

int absolute(int i);
double absolute(double d);
long absolute(long l);

int main()
{
    cout << absolute(-10) << "\n";
    cout << absolute(-11.0) << "\n";
    cout << absolute(-9L) << "\n";
}

int absolute(int i)
{
    cout << "Using integer absolute()\n";
    return i < 0 ? -i : i;
}

double absolute(double d)
{
    cout << "Using double absolute()\n";
    return d < 0.0 ? -d : d;
}

long absolute(long l)
{
    cout << "Using long absolute()\n";
    return l < 0 ? -l : l;
}