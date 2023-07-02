#include <iostream>
#include <unordered_set>
using namespace std;

// unordered_multiset is an associative container that contain a set of possibly non-unique objects
// Search, insertion and removal have average constant time-complexity
// Internally, the elements are organized into buckets
// It uses hashing to insert elements into buckets
// This allows fast access to individual elements, because after computing the hash of the value it refers to the exact bucket the element is placed into

// Maintain a collection of non-unique items with fast insertion and removal.

int main()
{
    unordered_multiset<int> umset = {4, 1, 2, 3, 9, 4, 3, 2, 7, 9, 8, 10};
    auto search = umset.find(2);
    if (search != umset.end())
    {
        cout << "Found " << (*search) << "\n";
    }
    else
    {
        cout << "Not_found" << endl;
    }
    for (auto &elm : umset)
    {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}