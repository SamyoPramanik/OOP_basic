#include <iostream>
using namespace std;

#define SIZE 100

class stack
{
    int stck[SIZE];
    int tos;

public:
    stack();
    ~stack();
    void push(int);
    int pop();
};

stack::stack()
{
    tos = 0;
    cout << "Stack initialized" << endl;
}

stack::~stack()
{
    cout << "Stack destroyed" << endl;
}

void stack::push(int i)
{
    if (tos == SIZE)
    {
        cout << "Stack is full.\n";
        return;
    }
    stck[tos] = i;
    tos++;
}

int stack::pop()
{
    if (tos == 0)
    {
        cout << "Stack underflow.\n";
        return 0;
    }

    tos--;
    return stck[tos];
}
int main()
{
    stack a, b; // create two stack objects
    a.push(1);
    b.push(2);
    a.push(3);
    b.push(4);
    cout << a.pop() << " ";
    cout << a.pop() << " ";
    cout << b.pop() << " ";
    cout << b.pop() << "\n";
    return 0;
}