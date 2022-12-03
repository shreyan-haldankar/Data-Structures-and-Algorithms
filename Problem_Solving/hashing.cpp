#include <bits/stdc++.h>
using namespace std;



void countFreq(vector<int> &arr, int n){
    unordered_map<int, int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto it: map){
        cout << it.first <<" " << it.second << endl;
    }
}

int main()
{
    vector<int> v = {10,5,10,15,10,5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    n = v.size();
    countFreq(v, n);
    return 0;
}