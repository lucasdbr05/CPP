#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

// It's a container adaptor that provides constant time lookup of the largest OR smallest element.
// By default vectors is the container used inside, cost of insertions and extraction is logarithmic
// priority_queue is implemented using make_heap, push_heap, pop_heap functions

template <typename T>
void print_queue(T &q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << '\n';
}

int main()
{
    {
        priority_queue<int> q;
        for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        {
            q.push(elm);
        }
        print_queue(q);
    }
    {
        // ascending
        priority_queue<int, vector<int>, greater<int>> q2;
        for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
        {
            q2.push(elm);
        }
        print_queue(q2);
    }

    // Lambda to compare elements
    // Descending
    auto cmp = [](int left, int right)
    { return (left) < (right); };
    priority_queue<int, vector<int>, decltype(cmp)> q3(cmp);
    for (int elm : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
    {
        q3.push(elm);
    }
    print_queue(q3);

    return 0;
}