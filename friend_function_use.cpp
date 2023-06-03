#include <iostream>
using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class c2;

class c1
{
    int status;

public:
    void set_status(int state);
    friend int idle(c1 a, c2 b);
};

class c2
{
    int status;

public:
    void set_status(int state);
    friend int idle(c1 a, c2 b);
};

void c1::set_status(int state)
{
    status = state;
}

void c2::set_status(int state)
{
    status = state;
}

int idle(c1 a, c2 b)
{
    if (a.status || b.status)
        return 0;
    return 1;
}

int main()
{
    c1 x;
    c2 y;

    x.set_status(IDLE);
    y.set_status(IDLE);

    if (idle(x, y))
        cout << "Screen can be used." << endl;
    else
        cout << "In use" << endl;

    x.set_status(INUSE);

    if (idle(x, y))
        cout << "Screen can be used." << endl;
    else
        cout << "In use" << endl;

    return 0;
}