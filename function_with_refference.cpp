#include <iostream>
#include <cstdio>
using namespace std;

int &myfunction(int &i)
{
    cout << i << endl;
    i = 50;
    return i;
}

int main()
{
    int num = 10;

    int num2 = myfunction(num);
    cout << num2 << endl;

    myfunction(num2) = 20;
    cout << num2 << endl;
}