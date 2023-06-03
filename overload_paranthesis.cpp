#include <iostream>
#include <cstdlib>
#include <new>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc() {}

    loc(int lg, int lt)
    {
        cout << "constructor called.." << endl;
        longitude = lg;
        latitude = lt;
    }

    void show()
    {
        cout << longitude << " " << latitude << endl;
    }

    loc operator+(loc op2);
    loc operator()(int i, int j);
};

loc loc::operator+(loc op2)
{
    loc temp = {longitude + op2.longitude, latitude + op2.latitude};
    return temp;
}

loc loc::operator()(int i, int j)
{
    cout << "operator() called.." << endl;
    longitude = i;
    latitude = j;
    return *this;
}

int main()
{
    loc ob1(10, 20), ob2(1, 1);
    ob1.show();
    ob1(7, 8);
    ob1.show();
    return 0;
}