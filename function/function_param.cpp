#include <iostream>
using namespace std;
using binaryop = int (*)(int, int);

int exec(binaryop func, int a, int b)
{
    return (*func)(a, b);
}
int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int min(int a, int b)
{
    return a >= b ? b : a;
}

int main()
{
    cout << exec(add, 44, 33) << endl;
    cout << exec(subtract, 44, 33) << endl;
    cout << exec(min, 44, 33) << endl;
    return 0;
}