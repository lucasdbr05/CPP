#include <iostream>
using namespace std;

auto add = [](int x, int y) -> int
{ return x + y; };
auto subtract = [](int x, int y) -> int
{ return x - y; };

#include <iostream>
using namespace std;
using binaryop = int (*)(int, int);

int exec(binaryop func, int a, int b)
{
    return (*func)(a, b);
}

int min(int a, int b)
{
    return a >= b ? b : a;
}

int main()
{
    cout << add(11, 9) << endl;
    cout << subtract(11, 9) << endl;
    cout << exec([](int x, int y)
                 { return x * y; },
                 44, 33)
         << endl;
    cout << exec(subtract, 44, 33) << endl;
    cout << exec(min, 44, 33) << endl;

    return 0;
}