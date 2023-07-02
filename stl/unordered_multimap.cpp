#include <iostream>
#include <unordered_map>
using namespace std;

// Unordered multimap is a container that supports equivalent keys and that associative values of another type with the keys
// Search, insertion, and removal has=ve constant complexity
// Internally, the elements are organized into buckets
// It uses hashing to insert elements into buckets
// This allows fast access to individual elements, because after computing the hash of the value it refers t the exact bucket the element is placed into

int main()
{
    unordered_multimap<int, char> unm = {{5, 'd'}};
    unm.insert({1, 'a'});
    unm.insert(pair<int, char>(2, 'b'));
    unm.insert(make_pair(3, 'c'));
    unm.insert(make_pair(3, 'd'));

    for (auto &elm : unm)
    {
        cout << elm.first << " " << elm.second << endl;
    }
    return 0;
}