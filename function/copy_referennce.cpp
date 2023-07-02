#include <iostream>
using namespace std;

void incCopy(int value)
{
    value++;
    value++;
    value++;
}

void incRef(int &value)
{
    value++;
    value++;
    value++;
}

int main()
{
    int x = 9;
    incCopy(x);
    int y = 7;
    incRef(y);

    cout << x << endl;
    cout << y << endl;
    return 0;
}