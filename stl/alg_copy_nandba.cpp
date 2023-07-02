#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

// copy_n is used to copy given number of elements from source to destination
// copy_backward copies the elements from the range by [first, last)

void print(vector<int> &vec)
{
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}

int main()
{
    vector<int> from_vector(10);
    iota(from_vector.begin(), from_vector.end(), 0);

    // copy_n
    vector<int> to_vector1;
    copy_n(from_vector.begin(), 4, back_inserter(to_vector1));
    print(to_vector1);

    // copy_backa=ward
    vector<int> to_vector2(15);
    copy_backward(from_vector.begin(), from_vector.end(), to_vector2.end());
    print(to_vector2);

    return 0;
}