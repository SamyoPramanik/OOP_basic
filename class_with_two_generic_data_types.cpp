#include <iostream>
using namespace std;

template <class type1, class type2>
class myclass
{
    type1 i;
    type2 j;

public:
    myclass(type1 a, type2 b)
    {
        i = a;
        j = b;
    }

    void show()
    {
        cout << i << " " << j << endl;
    }
};

int main()
{
    myclass<int, double> ob1(10, 0.23);
    myclass<char, char *> ob2('x', "Template add power");
    ob1.show();
    ob2.show();

    return 0;
}