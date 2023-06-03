#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

class phonebook
{
private:
    char name[80];
    int areacode;
    int prefix;
    int num;

public:
    phonebook(char *n, int a, int p, int nm)
    {
        strcpy(name, n);
        areacode = a;
        prefix = p;
        num = nm;
    }

    friend ostream &operator<<(ostream &stream, phonebook o)
    {
        cout << o.num << endl;
        stream << o.name << " ";
        stream << "(" << o.areacode << ")";
        stream << o.prefix << "-" << setw(4) << setfill('0') << o.num << endl;
    }
    // ostream &operator<<(ostream &stream, phonebook o)
    // {
    //     stream << o.name << " ";
    //     stream << "(" << o.areacode << ")";
    //     stream << o.prefix << "-" << o.num << endl;
    //     return stream;

    friend istream &operator>>(istream &stream, phonebook &o)
    {
        cout << "Enter name: ";
        stream >> o.name;
        cout << "Enter area code: ";
        stream >> o.areacode;
        cout << "Enter prefix: ";
        stream >> o.prefix;
        cout << "Enter number: ";
        stream >> o.num;
        cout << endl;

        return stream;
    }
};

int main()
{
    phonebook a("Ted", 111, 555, 1234);
    phonebook b("Alice", 312, 555, 0015);
    phonebook c("Tom", 212, 555, 9991);

    cout << a << b << c;

    cin >> a;
    cout << a;
    return 0;
}