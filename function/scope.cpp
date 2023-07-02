#include <iostream>
using namespace std;

// stack: last element in a stack is the first to be executed

int g = 1;
void func3()
{
    cout << "exec..." << endl;
}
void func2()
{
    g += 10;
    func3();
}
void func1()
{
    g += 1;
    func2();
}

int main()
{
    func1();
    cout << g;
    return 0;
}