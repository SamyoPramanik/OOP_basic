#include <iostream>
using namespace std;

class atype
{
    int a[3];

public:
    atype(int i, int j, int k)
    {
        a[0] = i;
        a[1] = j;
        a[2] = k;
    }

    int &operator[](int i)
    {
        if (i < 0 || i > 2)
        {
            cout << "Boundary error" << endl;
            exit(1);
        }
        return a[i];
    }
};

int main()
{
    atype ob(1, 2, 3);
    cout << ob[1] << endl;

    ob[1] = 25;

    int val = ob[1];

    cout << ob[1] << endl;
    cout << val << endl;
    cout << ob[-1] << endl;

    return 0;
}