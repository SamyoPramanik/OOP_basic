#include <iostream>
using namespace std;

class base1
{
public:
    base1() { cout << "constructing base1" << endl; }
    ~base1() { cout << "destructing base1" << endl; }
};

class base2
{
public:
    base2() { cout << "constructing base2" << endl; }
    ~base2() { cout << "destructing base2" << endl; }
};

class derived1 : public base2, public base1
{
public:
    derived1() { cout << "Constructing derived1" << endl; }
    ~derived1() { cout << "Destructing derived1" << endl; }
};

class derived2 : public derived1
{
public:
    derived2() { cout << "Constructing derived2" << endl; }
    ~derived2() { cout << "Destructing derived2" << endl; }
};

int main()
{
    derived1 ob;

    cout << endl;
    derived2 ob1;
}