#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// STL Algorithm library defines functions for a variety of purposes (e.g. searching, sorting, counting, manipulating)
// Algorithms are applied to range of elements
//<algorithm> header is used to get all algorithms in stl.

int main()
{
    vector<int> Vec{4, 3, 5, 2, 6, 1};
    vector<int>::iterator it = find(Vec.begin(), Vec.end(), 4);
    if (it == Vec.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}