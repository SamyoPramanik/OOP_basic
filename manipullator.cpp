#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << hex << 100 << endl;

    cout << setfill('?') << showpos << setw(20) << setprecision(10) << 2343.8 << endl;

    bool b;
    b = true;
    cout << b << " " << boolalpha << b << endl;

    cout << "Enter a boolean value: ";
    cin >> boolalpha >> b;
    cout << "Here is what you entered: " << b;

    return 0;
}