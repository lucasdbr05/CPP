#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

namespace calc20
{
    int add(int a, int b)
    {
        return a + b + 20;
    }
}

int main()
{
    cout << add(20, 25) << endl;
    cout << calc20::add(20, 25) << endl;
    return 0;
}