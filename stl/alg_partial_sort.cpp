#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;
// partial_sort rearanges elements such that the range [begin, middle) contains the sorted elements
// the order of the remaining elements is unspecified

int main()
{
    vector<int> Vec = {5, 4, 6, 7, 3, 2, 8, 9, 1};
    partial_sort(Vec.begin(), Vec.begin() + 4, Vec.end());

    for (auto elm : Vec)
    {
        cout << elm << " ";
    }
    cout << endl;
    return 0;
}