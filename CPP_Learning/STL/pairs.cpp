#include <bits/stdc++.h>
using namespace std;

void pairs(){
    // pair<int,int> p = {1,3};
    // cout << p.first << " " << p.second << endl;

    // pair<int,pair<int,int>> p = {1,{2,3}};
    // cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    // cout << arr[1].second;
    int N = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i].first << " " << arr[i].second<< " ";
    }
    
}


int main(){
    pairs();
    return 0;
}