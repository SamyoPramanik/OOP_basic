#include <iostream>
using namespace std;

void iputs(char *str, int indent = -1)
{
    static int i = 0;
    if (indent < 0)
        indent = i;
    else
        i = indent;

    for (; indent; indent--)
        cout << " ";
    cout << str << endl;
}

int main()
{
    iputs("Hello there", 10);
    iputs("This will be indented 10 spaces by default");

    iputs("Hello there", 5);
    iputs("This will be indented 5 spaces by default");
    iputs("This will not be indented", 0);
}