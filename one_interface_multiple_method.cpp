#include <iostream>
using namespace std;

class convert
{
protected:
    double val1, val2;

public:
    convert(double i) { val1 = i; }

    double getconv() { return val2; }
    double getinit() { return val1; }

    virtual void compute() = 0;
};

class l_to_g : public convert
{
public:
    l_to_g(double i) : convert(i) {}

    void compute()
    {
        val2 = val1 / 3.7854;
    }
};

class f_to_c : public convert
{
public:
    f_to_c(double i) : convert(i) {}

    void compute()
    {
        val2 = (val1 - 32) / 1.8;
    }
};

class f_to_m : public convert
{
public:
    f_to_m(double i) : convert(i) {}

    void compute()
    {
        val2 = val1 / 3.28;
    }
};

int main()
{
    convert *p;

    l_to_g lgob(4);
    f_to_c fcob(98.4);

    p = &lgob;
    cout << p->getinit() << " liters is ";
    p->compute();
    cout << p->getconv() << " gallons" << endl;

    p = &fcob;
    cout << p->getinit() << " in Farenheit is ";
    p->compute();
    cout << p->getconv() << " Celcious" << endl;

    f_to_m fmob(5);
    fmob.compute();
    cout << fmob.getinit() << " feets is " << fmob.getconv() << " meters" << endl;
}