#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, vector<int>> mp;
    mp.insert({0, {1, 2, 3}});
    mp.insert({0, {5, 6, 7}});

    auto it = mp.equal_range(1);

    cout << "The multimap elements of key 1 is : \n";
    cout << "KEY\tELEMENT\n";

    // Prints all the elements of key 1
    for (auto itr = it.first; itr != it.second; ++itr)
    {
        cout << itr->first
             << '\t' << itr->second[0] << '\n';
    }
    multimap<int, vector<string>> ump;
    string st = "charam";
    vector<string> res;
    res.push_back(st);
    ump.insert({5, res});
    return 0;
}