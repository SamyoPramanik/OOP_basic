#include <iostream>
#include <new>
using namespace std;

class powers
{
    int x;

public:
    powers() { x = 0; }
    powers(int i) { x = i; }

    int getx() { return x; }
    void setx(int i) { x = i; }
};

int main()
{
    powers ofTwo[] = {1, 2, 4, 8, 16};
    powers ofThree[5];
    powers *p;
    int i;

    // show powers of two
    cout << "powers of two: ";
    for (i = 0; i < 5; i++)
        cout << ofTwo[i].getx() << " ";
    cout << endl
         << endl;

    // set powers of three
    ofThree[0].setx(1);
    ofThree[1].setx(3);
    ofThree[2].setx(9);
    ofThree[3].setx(27);
    ofThree[4].setx(81);

    // show powers of three
    cout << "Powers of three: ";
    for (i = 0; i < 5; i++)
    {
        cout << ofThree[i].getx() << " ";
    }
    cout << "\n\n";

    // dynamically allocate an array

    try
    {
        p = new powers[5];
    }
    catch (bad_alloc xa)
    {
        cout << "Allocation failed.." << '\n';
    }

    for (i = 0; i < 5; i++)
        p[i].setx(ofTwo[i].getx());

    // show powers of two
    cout << "Powers of two: ";
    for (i = 0; i < 5; i++)
    {
        cout << p[i].getx() << " ";
    }
    cout << "\n\n";

    delete[] p;
    return 0;
}