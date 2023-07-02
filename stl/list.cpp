#include <iostream>
#include <list>
using namespace std;

// Sequence container that allow non-contiguous memory allocation
// assign, front, back,empty, max_size,size, clear, insert, emplace, reverse,push_back, push_front, pop_back, pop_front, sort, merge, splice, unique, remove, remove_if, resize

int main()
{
    list<int> list1 = {5, 2, 4, 6, 2};
    list<int> list2 = {5, 7, 6, 1, 9};
    list1.sort();
    list2.sort();
    list1.merge(list2);
    list1.unique();
    for (auto &elm : list1)
    {
        cout << elm << " ";
    }
    cout << endl;

    for (auto &elm : list2)
    {
        cout << elm << " ";
    }
    cout << endl;

    return 0;
}