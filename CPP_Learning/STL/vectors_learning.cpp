#include <bits/stdc++.h>
using namespace std;

void vector_func()
{
    // vector<int> v;
    // v.push_back(1);
    // v.emplace_back(10);

    // vector<pair<int,int>> v;
    // v.push_back({1,2});
    // v.emplace_back(10,20);

    // for(const pair<int,int> &edge:v){
    //     cout << edge.first << " " << edge.second << " ";
    // }
    vector<int> v1(5, 10);
    v1.push_back(20);
    vector<int> v2(v1);
    for (auto it : v2)
        cout << it << " ";
}

int main()
{
    vector_func();
    return 0;
}