#include <iostream>
#include <deque>
using namespace std;
// std::deque<T> ;

// It`s an indexed container
// It allows fast insertions at both beginning and end;
//  Unlike vector elements of deque are not stored contigous.
// It uses individual allocated fixed array with additional bookkeeping meaning index based access queue must perform two pointers deference but in vector we get in one reference
// The storage of a deque is automatocally expanded and contracted as needed
// Cheaper tha a vector
// Complexity: random access O(1); Insertion or removal at end or begining o(n); others insertions: O(N)

void print(const std::deque<int> &d)
{
    for (int num : d)
        cout << num << " ";
    cout << endl;
}
int main()
{
    {
        deque<int> d = {2, 3, 4};
        d.push_front(1);
        d.push_back(5);
        print(d);
    }

    {
        deque<int> d = {2, 3, 4};
        d.pop_front();
        d.pop_back();
        print(d);
    }
    return 0;
}