#include <iostream>
using namespace std;

class building
{
protected:
    int floor;
    int area;

public:
    building(int floor, int area);
};

class school : public building
{
protected:
    int classroom;

public:
    school(int floor, int area, int classroom);
};

building::building(int _floor, int _area)
{
    floor = _floor;
    area = _area;
}

school::school(int _floor, int _area, int _classroom) : building(_floor, _area)
{
    classroom = _classroom;
}

int main()
{
    building b(12, 12);
    school s(10, 20, 30);
    return 0;
}