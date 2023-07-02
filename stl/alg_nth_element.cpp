#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

// nth_element is a partial sorting algorithm that rearranges elements in [first, last) such that:
// the element at the element on the nth position is the one which should be at that position if we sort the list
// implemented using quick select

int main()
{
    vector<int> v = {5, 4, 6, 7, 3, 2, 8, 9, 1};

    nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
    cout << "Median: " << v[v.size() / 2] << endl;

    nth_element(v.begin(), v.begin() + 1, v.end(), greater<int>());
    cout << "Second Largest: " << v[1] << endl;

    return 0;
}