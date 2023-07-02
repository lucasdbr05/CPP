#include <iostream>
#include <set>
using namespace std;

// Used to construct object in-place and avoids unnecessary copy objects.

class A
{
public:
    int x;
    A(int x = 0) : x{x} { cout << "Construct" << endl; };
    A(const A &rhs)
    {
        x = rhs.x;
        cout << "Copy" << endl;
    }
};
bool operator<(const A &lhs, const A &rhs) { return lhs.x < rhs.x; }

int main()
{
    set<A> Set;
    // Set.insert(A(10));
    Set.emplace(2);
    return 0;
}