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

    loc operator+(loc op2);
    void operator,(loc op2);
};

loc loc::operator+(loc op2)
{
    loc temp = {longitude + op2.longitude, latitude + op2.latitude};
    return temp;
}

void loc::operator,(loc op2)
{
    // loc temp;

    // temp.longitude = op2.longitude;
    // temp.latitude = op2.latitude;
    cout << op2.longitude << " " << op2.latitude << endl;

    // return temp;
}

int main()
{
    loc ob1(10, 20), ob2(5, 30), ob3(1, 1);

    ob1.show();
    ob2.show();
    ob3.show();
    cout << endl;

    ob1 = (ob1, ob2, ob3);

    // ob1.show();

    return 0;
}