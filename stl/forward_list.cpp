#include <iostream>
#include <forward_list>
using namespace std;
// List that moves only forward; well tested an a bunch of available fuction.
// assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge, splice_after, unique, remove, remove_if, resize

int main()
{
    forward_list<int> list1 = {5, 4, 6, 2};
    forward_list<int> list2 = {7, 6, 1, 9};
    list1.insert_after(list1.begin(), 8);
    list1.sort();
    list2.sort();
    list1.merge(list2);
    // list.splice_after(list1.begin(), list2)
    //  list.reverse()
    //  list.unique()
    for (auto &elm : list1)
        cout << elm << endl;
    return 0;
}