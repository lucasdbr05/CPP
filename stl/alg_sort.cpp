#include <iostream>
#include <algorithm>
#include <vector>
#include <execution>

using namespace std;

// Not only integral but user defined data can be sorted using this function, on ascending or descending order
// Internally, it uses IntroSort which is combination of QuickSort, HeapSort and InsertionSort
// By default, it uses Quick sort, but if it's taking more than N*logN, it switches to HeapSort and for really small sized arrays, it switches to Insertion Sort
// We can use parallel execution policy for better performance

// Sorting integral data types, or user defined data types, or using a function object, or using a lambda expression
/*
struct
{
    bool operator()(int a, int b) const
    {
        return a < b;
    }
} customLess;

int main()
{
    vector<int> Vec = {5, 4, 6, 7, 3, 2, 8, 9, 1};
    sort(Vec.begin(), Vec.end(), customLess);
    for (auto elm : Vec)
    {
        cout << elm << " ";
    }
    cout << endl;
    return 0;
}
*/

/*
int main()
{
vector<int> Vec = {5, 4, 6, 7, 3, 2, 8, 9, 1};
sort(execution::par, Vec.begin(), Vec.end());
for (auto elm : Vec)
{
    cout << elm << " ";
}
cout << endl;
return 0;
}

class Point
{
public:
    int x;
    int y;
    Point(int x = 0, int y = 0) : x{x}, y{y} {}
    bool operator<(const Point &p1)
    {
        return (x + y) < (p1.x + p1.y);
    }
};
int main()
{
    vector<Point> Vec{{1, 2}, {3, 1}, {0, 1}};
    sort(Vec.begin(), Vec.end());
    for (auto &e : Vec)
    {
        cout << e.x << " " << e.y << endl;
    }
    cout << endl;
    return 0;
}
*/

int main()
{
    vector<int> Vec = {5, 4, 6, 7, 3, 2, 8, 9, 1};
    sort(Vec.begin(), Vec.end(), [](int a, int b)
         { return a < b; });
    for (auto elm : Vec)
    {
        cout << elm << " ";
    }
    cout << endl;
    return 0;
}
