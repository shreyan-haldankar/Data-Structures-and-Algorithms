#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, nums,x,pos,i=0,j=0;
    
    
    
    cin >> N;
    vector<int> v(N);
    while(N--){
    cin >>  v[i++];  
    }
    // while(cin>>nums)
    // v.push_back(nums);
    
    cin >> x;
    v.erase(v.begin() + x-1);
    int p,s;
    cin >> p >> s;
    // e.push_back(pos);
    // for(int i=0; i<e.size();i++)
    v.erase(v.begin()+(p-1),v.begin()+s-1);
    
    cout<< v.size() << endl ;
    for(auto it:v)
    cout << it << " ";
    return 0;
}
