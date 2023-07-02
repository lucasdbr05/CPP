#include <iostream>
#include <unordered_map>
using namespace std;

// unordered_map is an associative container that contains key-value pair with unique keys
// Search, insertion, and removal have average constant-time complexity
// Internally, the elements are organized into buckets
// It uses hashing to insert elements into buckets
// This allows fast access to individual elements, because after computing the hash of the value it refers t the exact bucket the element is placed into

// Fast insertion and removal

int main()
{
    unordered_map<int, char> umap = {{1, 'a'}, {2, 'b'}};

    cout << umap[1] << endl;
    cout << umap[2] << endl;
    // Update
    umap[1] = 'c';

    for (auto &elm : umap)
    {
        cout << elm.first << " " << elm.second << " ";
    }
    cout << endl;

    auto result = umap.find(2);
    if (result != umap.end())
    {
        cout << "Found " << result->first << result->second << "\n";
    }
    else
    {
        cout << "Not_found" << endl;
    }

    return 0;
}