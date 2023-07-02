#include <iostream>
#include <vector>
#include <map>
using namespace std;

// multimap<T1,T2> obj;
// Multimap is an associative container that contains a sorted list a key-value pairs while permitting multiple entries with the saame key
// It store in sorted order on the basis of key
// Data structure used in multimap is not defined by standard, but with red-black tree.
// count, find, contains, equal_range, lower_bound, upper_bound/(don't have at() and [])

int main()
{
    multimap<char, int> Mmap;
    Mmap.insert(make_pair('a', 1));
    Mmap.insert(make_pair('a', 2));
    Mmap.insert(make_pair('a', 3));
    Mmap.insert(make_pair('b', 1));
    Mmap.insert(make_pair('b', 2));

    cout << Mmap.count('a') << endl;
    auto pair = Mmap.find('a');
    cout << pair->first << "   " << pair->second << endl;
    auto low = Mmap.lower_bound('a');
    cout << low->first << "   " << low->second << endl;
    auto upp = Mmap.upper_bound('b');
    cout << upp->first << "   " << upp->second << endl;

    /*
    for (auto &elm : Mmap)
    {
        cout << elm.first << "   " << elm.second << endl;
    }
    cout << endl;

    //pair<multimap<char, int>::iterator, multimap<char, int>::iterator>range = Mmap.equal_range('a');
    auto range = Mmap.equal_range('a');
    for (auto it = range.first; it != range.second; it++)
    {
        cout << it->first << "  " << it->second << endl;
    }
    */
    return 0;
}