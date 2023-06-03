#include <iostream>
using namespace std;
class shared
{
public:
    static int a;
};
int shared::a; // define a
int main()
{
    // initialize a before creating any objects
    shared::a = 99;
    cout << "This is initial value of a: " << shared::a;
    cout << "\n";
    shared x, y;
    cout << "This is x.a: " << x.a << endl;

    x.a = 50;
    cout << "This is x.a: " << x.a << endl;

    printf("x.a = %u\n", &x.a);
    printf("y.a = %u\n", &y.a);
    printf("a = %u\n", &shared::a);

    return 0;
}