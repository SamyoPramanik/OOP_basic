#include <iostream>
using namespace std;

class complex
{
    int i, j;

public:
    complex(int i = 0, int j = 0)
    {
        this->i = i;
        this->j = j;
    }

    complex operator=(complex a)
    {
        // complex temp = {a.i, a.j};
        // return temp;

        i = a.i;
        j = a.j;
        return *this;
    }

    complex operator++()
    {
        i++;
        j++;
        return *this;
    }

    complex operator++(int x)
    {
        complex temp = {this->i, this->j};
        i++;
        j++;
        // return *this;
        return temp;
    }

    complex operator+=(complex a)
    {
        i += a.i;
        j += a.j;
        return *this;
    }

    void set(int i, int j)
    {
        this->i = i;
        this->j = j;
    }

    void show()
    {
        cout << i << "+" << j << "j" << endl;
    }
};

int main()
{
    complex a, b, c;

    ++a;
    a.show();

    b.set(1, 3);
    c = b++;

    b.show();
    c.show();
    cout << endl;

    c = b += a;
    a.show();
    b.show();
    c.show();
}