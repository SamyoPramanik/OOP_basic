#include <iostream>
#include <cstring>
using namespace std;

istream &getpass(istream &stream)
{
    cout << '\a';
    cout << "Enter password: ";
    return stream;
}

int main()
{
    char pw[80];

    do
    {
        cin >> getpass >> pw;

    } while (strcmp(pw, "password"));

    cout << "Logon complete" << endl;

    return 0;
}