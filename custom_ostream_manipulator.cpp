#include <iostream>
#include <iomanip>
using namespace std;

ostream &sethex(ostream &stream)
{
    stream.setf(ios::showbase);
    stream.setf(ios::hex, ios::basefield);
    return stream;
}

ostream &ra(ostream &stream)
{
    stream << "------>";
    return stream;
}

ostream &la(ostream &stream)
{
    stream << "<------";
    return stream;
}

int main()
{
    cout << 255 << " " << sethex << 255 << " " << 255 << endl;
    cout << "High balance " << ra << 1233.23 << endl;
    cout << "Over draft " << ra << 567.66 << la;

    return 0;
}