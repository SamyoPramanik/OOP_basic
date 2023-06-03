#include <iostream>
#include "namespace.h"
using namespace std;
using namespace CounterNameSpace;

int main()
{
    upperbound = 20;
    lowerbound = 10;
    counter ob2(20);
    int i;

    do
    {
        i = ob2.run();
        cout << i << " ";
        _sleep(200);
    } while (i > lowerbound);
}