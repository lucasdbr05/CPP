#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums;
    nums.assign(10, 1);
    nums[3] = 6;
    nums[5] = 9;
    nums[7] = 7;
    cout << nums.size() << endl;
    nums.erase(nums.begin() + 4);
    for (auto n : nums)
    {
        cout << n << " ";
    }
    nums.clear();
    cout << "\n"
         << nums.size();
    return 0;
}