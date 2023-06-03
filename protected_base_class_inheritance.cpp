#include <iostream>
using namespace std;

class base
{
protected:
    int i, j;

public:
    void setij(int a, int b)
    {
        i = a;
        j = b;
    }

    void showij() { cout << i << " " << j << endl; }
};

class derived : protected base
{
    int k;

public:
    void setk()
    {
        setij(10, 12);
        k = i * j;
    }

    void showall()
    {
        cout << k << " ";
        showij();
    }
};

int main()
{
    derived ob;
    ob.setk();
    ob.showall();

    return 0;
}