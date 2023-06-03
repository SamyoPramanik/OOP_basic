#include <iostream>
using namespace std;

char *replace(char *s, int i); // return a refference

int main()
{
    char s[80] = "Hello There";

    char *p = replace(s, 5);
    *p = 'X';
    cout << s;
    return 0;
}

char *replace(char *s, int i)
{
    return s + i;
}