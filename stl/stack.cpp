#include <iostream>
#include <stack>

using namespace std;
// stack class is a container adapter that gives the progremmer the functionality of a stck
// Internally it uses deque STL container
// It's a last-in first-out data structure
// stack allows to push(insert) and pop(remove) only from back

// empty, size, top, push, pop
void print(std::stack<int> stk)
{
    while (!stk.empty())
    {
        cout << stk.top() << endl;
        stk.pop(); // remove from the back(top)
    }
}
int main()
{
    stack<int> stk;
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    print(stk);
    return 0;
}