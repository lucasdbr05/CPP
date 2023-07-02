#include <iostream>
#include <algorithm>
#include <list>
#include <numeric>
#include <vector>

using namespace std;

// Fills the range [first, last) with sequentially increasing values, starting with value and repetitively evaluating ++value.

int main()
{
    list<int> lst(20);
    iota(lst.begin(), lst.end(), -10);
    for (auto elm : lst)
        cout << elm << " ";
    cout << endl;

    vector<list<int>::iterator> Vec(lst.size());
    iota(Vec.begin(), Vec.end(), lst.begin());

    for (auto elm : Vec)
        cout << *elm << " ";
    return 0;
}