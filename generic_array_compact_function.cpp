#include <iostream>
using namespace std;

template <class x>
void compact(x *items, int count, int start, int end)
{
    int i;

    for (i = end + 1; i < count; i++, start++)
        items[start] = items[i];

    for (; start < count; start++)
        items[start] = (x)0;
}

int main()
{
    int nums[7] = {0, 1, 2, 3, 4, 5, 6};

    char str[] = "Generic Function";

    cout << "Here is uncompacted integer array: ";
    for (int i = 0; i < 7; i++)
        cout << nums[i] << " ";
    cout << endl;

    cout << "Here is uncompacted string: ";
    for (int i = 0; i < 18; i++)
        cout << str[i] << ' ';
    cout << endl;

    compact(nums, 7, 2, 4);
    compact(str, 18, 6, 10);

    cout << "Here is compacted integer array: ";
    for (int i = 0; i < 7; i++)
        cout << nums[i] << ' ';
    cout << endl;

    cout << "Here is compacted string: ";
    for (int i = 0; i < 18; i++)
        cout << str[i] << ' ';
    cout << endl;

    return 0;
}