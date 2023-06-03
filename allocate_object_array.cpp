#include <iostream>
#include <new>
#include <cstring>
using namespace std;

class balance
{
    double cur_bal;
    char name[80];

public:
    balance(double n, char *s)
    {
        cur_bal = n;
        strcpy(name, s);
    }

    balance() {}

    ~balance()
    {
        cout << "Destructing " << name << endl;
    }

    void set(double n, char *s)
    {
        cur_bal = n;
        strcpy(name, s);
    }

    void get_bal(double &n, char *s)
    {
        n = cur_bal;
        strcpy(s, name);
    }
};

int main()
{
    balance *p;
    char s[80];
    double n;

    try
    {
        p = new balance[3];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failed.." << endl;
        return 1;
    }

    p[0].set(12387.00, "Alpha");
    p[1].set(1311, "Bravo");
    p[2].set(1254, "Charlie");

    for (int i = 0; i < 3; i++)

    {
        p[i].get_bal(n, s);

        cout << s << "'s balance is: " << n << endl;
    }

    delete[] p;

    return 0;
}