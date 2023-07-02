#include <iostream>
#include <unordered_set>
using namespace std;

// Unordered Set is a associative container that contains set ov unique objects
// Search, insertion and removal have average constant-time complexity
// Internally, the elements are organized into buckets
// It uses hashing to insert elements into buckets
// Fast access to individual elements
// Maintain a collection of unique items with fast insertion and removal

int main()
{
    unordered_set<int> uset = {4, 1, 2, 3, 4, 2, 3};

    auto search = uset.find(2);
    if (search != uset.end())
    {
        cout << "Found " << (*search) << "\n";
    }
    else
    {
        cout << "Not_found" << endl;
    }
    for (auto &elm : uset)
    {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}