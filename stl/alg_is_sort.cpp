#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Check if th elements in range [begin, last) are sorted (by default in ascending order)

int main()
{
    vector<int> Vec = {5, 4, 6, 7, 3, 2, 8, 9, 1};
    sort(Vec.begin(), Vec.end(), [](int a, int b)
         { return a < b; });
    for (auto elm : Vec)
    {
        cout << elm << " ";
    }
    cout << endl
         << is_sorted(Vec.begin(), Vec.end()) << endl;
    return 0;
}
