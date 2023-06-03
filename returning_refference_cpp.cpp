#include <iostream>
using namespace std;

char &replace(int i); // return a refference

char s[80] = "Hello There";

int main()
{

    replace(5) = 'X';
    cout << s;
    return 0;
}

char &replace(int i)
{
    // return *(s + i);
    return s[i];
}