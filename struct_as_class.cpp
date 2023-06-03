#include <iostream>
#include <cstring>
using namespace std;

struct mystr
{
    void buildstr(char *s);
    void showstr();

private:
    char str[255];
};

void mystr::buildstr(char *s)
{
    if (!*s)
        *str = '\0';
    else
        strcat(str, s);
}

void mystr::showstr()
{
    cout << str << endl;
}

int main()
{
    mystr s;
    s.buildstr("");
    s.buildstr("Hello ");
    s.buildstr("there!");

    s.showstr();

    return 0;
}