#include <iostream>
using namespace std;

class loc
{
    int longitude, latitude;

public:
    loc()
    {
        longitude = latitude = 0;
    }

    loc(int lg, int lt)
    {
        longitude = lg;
        latitude = lt;
    }

    void show()
    {
        cout << longitude << " " << latitude << endl;
    }

    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator=(loc op2);
    void operator++();
};

loc loc::operator+(loc op2)
{
    loc temp = {op2.longitude + longitude, op2.latitude + latitude};
    // temp.longitude = op2.longitude + longitude;
    // temp.latitude = op2.latitude + latitude;

    return temp;
}

loc loc::operator-(loc op2)
{
    loc temp;
    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;

    return temp;
}

loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this; // return object that generated the call
}

void loc::operator++()
{
    longitude++;
    latitude++;
    // return *this;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(90, 90);

    ob1.show();
    ob2.show();

    ++ob1;
    ob1.show();

    // ob2 = ++ob1;
    ob1.show();
    ob2.show();

    ob1 = ob2 = ob3;
    ob1.show();
    ob2.show();

    ob1 = ob1.operator+(ob2);
    ob1.show();

    return 0;
}