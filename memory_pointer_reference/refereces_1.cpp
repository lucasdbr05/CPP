#include <iostream>
using namespace std;

int main()
{
    int a = 10; // 32 bits = 4 bytes
    cout << a << "\t" << &a << endl;

    string name = "Paul";
    cout << name << "\t" << &name << endl;

    return 0;
}