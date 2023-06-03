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

    ~balance()
    {
        cout << "Destructing " << name << endl;
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
        p = new balance(12387.87, "Ralph Wilson");
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failed.." << endl;
        return 1;
    }

    p->get_bal(n, s);

    cout << s << "'s balance is: " << n << endl;

    delete p;

    return 0;
}