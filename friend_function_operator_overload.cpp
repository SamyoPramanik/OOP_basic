#include <iostream>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {}

    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }

    void show()
    {
        cout << longitude << " " << latitude << endl;
    }

    friend loc operator+(loc op1, loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    friend loc operator++(loc &op1);
    friend loc operator++(loc &op1, int i);
};

loc operator+(loc op1, loc op2)
{
    loc temp;
    temp = {op1.longitude + op2.longitude, op1.latitude + op2.latitude};
    return temp;
}

loc loc::operator-(loc op2)
{
    loc temp;
    temp = {longitude - op2.longitude, latitude - op2.latitude};
    return temp;
}

loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this;
}

loc operator++(loc &op1)
{
    op1.longitude++;
    op1.latitude++;
    return op1;
}

loc operator++(loc &op1, int i)
{
    loc temp = op1;
    op1.longitude++;
    op1.latitude++;
    return temp;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30);

    ob1 = ob1 + ob2;
    ob1.show();
    (++ob1).show();
    ob1.show();

    (ob1++).show();
    ob1.show();
    return 0;
}