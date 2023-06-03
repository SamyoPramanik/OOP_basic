#include <iostream>
#include <cstdio>
using namespace std;

class date
{
    int day, month, year;

public:
    date(char *d);
    date(int m, int d, int y);
    void show_date();
    friend void print_date(date d);
};

date::date(char *d)
{
    sscanf(d, "%d%*c%d%*c%d", &month, &day, &year);
    // sscanf(d, "%d/%d/%d", &month, &day, &year);
}

date::date(int m, int d, int y)
{
    day = d;
    month = m;
    year = y;
}

void date::show_date()
{
    cout << month << "/" << day << "/" << year << endl;
}

void print_date(date d)
{
    cout << d.month << "/" << d.day << "/" << d.year << endl;
}

int main()
{
    date ob1(12, 4, 2003), ob2("10/22/2003");

    char s[20];
    cout << "Enter new date:";
    cin >> s;
    date d(s);
    d.show_date();
    print_date(d);

    ob1.show_date();
    ob2.show_date();
}