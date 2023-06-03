#include <iostream>
using namespace std;

const int TABWIDTH = 8;

template <class x>
void tabOut(x data, int tab = 1)
{
    for (; tab; tab--)
        for (int i = 0; i < TABWIDTH; i++)
            cout << " ";

    cout << data << endl;
}

int main()
{
    tabOut("this is a test", 0);
    tabOut(100, 1);
    tabOut('X', 2);
    tabOut(10 / 3, 3);
    tabOut("tab used default value");
}