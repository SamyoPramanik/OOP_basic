#include <iostream>
using namespace std;

const int SIZE = 10;

template <class x>
class stack
{
    x stck[SIZE];
    int tos;

public:
    stack() { tos = 0; }
    void push(x ob);
    x pop();
};

template <class x>
void stack<x>::push(x ob)
{
    if (tos == SIZE)
    {
        cout << "Stack is full" << endl;
        return;
    }
    stck[tos] = ob;
    tos++;
}

template <class x>
x stack<x>::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty" << endl;
        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    stack<char> s1, s2;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');
    s2.push('x');
    s2.push('y');
    s2.push('z');

    for (i = 0; i < 3; i++)
        cout << "Pop s1: " << s1.pop() << endl;

    for (i = 0; i < 3; i++)
        cout << "Pop s2: " << s2.pop() << endl;

    stack<double> ds1, ds2;

    ds1.push(1.1);
    ds1.push(3.3);
    ds1.push(5.5);
    ds2.push(2.2);
    ds2.push(4.4);
    ds2.push(6.6);

    for (i = 0; i < 4; i++)
        cout << "Pop ds1: " << ds1.pop() << "\n";
    for (i = 0; i < 4; i++)
        cout << "Pop ds2: " << ds2.pop() << "\n";

    return 0;
}