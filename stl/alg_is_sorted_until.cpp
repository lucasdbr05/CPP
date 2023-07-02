#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Finds how many elements are sorted in given range [first, last)

int main()
{
    vector<int> Vec{4, 3, 2, 1, 6, 7, 8, 1};

    auto it = is_sorted_until(Vec.begin(), Vec.end(), greater<int>());
    auto diff = distance(Vec.begin(), it);

    cout << diff << endl;
    return 0;
}