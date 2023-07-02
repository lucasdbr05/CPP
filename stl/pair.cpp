#include <iostream>
#include <vector>
using namespace std;

// pair<t1,t2> objName;
// It's a struct template that provides a way to store two heterogeneous objects as a single unit.
// map, multimap, unorder_map, unorder_multimap can use pair to store data

void print(std::pair<int, int> &obj) { cout << obj.first << " " << obj.second << endl; }

int main()
{
    {
        pair<int, int> obj(10, 20);
        print(obj);
    }
    {
        pair<int, int> obj = make_pair(10, 20);
        print(obj);
    }
    vector<pair<string, int>> list;
    list.push_back(make_pair("Rupesh", 30));
    list.push_back(make_pair("Hitesh", 27));
    list.push_back(pair<string, int>("Lucas", 18));
    list.push_back(std::pair<string, int>("Flu", 1902));
    for (auto &elm : list)
    {
        cout << elm.first << " " << elm.second << endl;
    }
    return 0;
}