#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

// copy Copies the elements in the range, defined by [first, last), to another range begining at d_first
// copy_if only copies if predicate returns true

void print(vector<int> &vec)
{
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    vector<int> from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);

    vector<int> to_vector1(10);
    copy(from_vector.begin(), from_vector.end(), to_vector1.begin());
    print(to_vector1);

    vector<int> to_vector2(10);
    copy(from_vector.begin(), from_vector.end(), back_inserter(to_vector2));
    print(to_vector2);

    cout << "Odd numbers in to_vector are: ";
    vector<int> to_vector3(5);
    copy_if(from_vector.begin(), from_vector.end(), to_vector3.begin(), [](int x)
            { return x % 2 == 1; });
    print(to_vector3);
    return 0;
}