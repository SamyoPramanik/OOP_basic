#include <iostream>
using namespace std;

class c1
{
public:
    c1(int i) { val = i; }
    int val;
    int double_val() { return val + val; }
};

int main()
{
    int c1::*data;     // data member pointer
    int (c1::*func)(); // function member pointer
    c1 ob1(1), ob2(2);

    data = &c1::val;
    func = &c1::double_val;

    cout << "Here are values: ";
    cout << ob1.*data << " " << ob2.*data << endl;

    cout << "Here they are doubled: ";
    cout << (ob1.*func)() << " " << (ob2.*func)() << endl;

    int *pointer = &ob1.val;
    cout << *pointer << endl;
}