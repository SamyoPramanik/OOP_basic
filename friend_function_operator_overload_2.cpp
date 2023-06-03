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

    friend loc operator+(loc op1, int op2);
    friend loc operator+(int op2, loc op1);
};

loc operator+(loc op1, int op2)
{
    op1.longitude += op2;
    op1.latitude += op2;
    return op1;
}

loc operator+(int op2, loc op1)
{
    op1.longitude += op2;
    op1.latitude += op2;
    return op1;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(7, 14);

    ob1.show();
    ob2.show();
    ob3.show();

    ob1 = ob2 + 10;
    ob3 = 10 + ob2;

    ob1.show();
    ob2.show();
    ob3.show();

    return 0;
}