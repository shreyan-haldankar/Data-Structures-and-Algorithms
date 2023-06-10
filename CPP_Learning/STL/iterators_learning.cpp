#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    vector<int> v = {1,2,3,4,5,6};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    
    // vector<int> ::iterator it = v.begin();
    // for( it = v.begin(); it != v.end(); ++it)
    // {
    //     cout << (*it)  << " ";
    // }
    vector<pair<int,int>> vp = {{1,2},{2,3},{3,4}};
    vector<pair<int,int>> ::iterator it = vp.begin();
    // for ( it = vp.begin(); it!=vp.end(); ++it)
    // {
    //     cout << (*it).first << " " << (*it).second << " ";
    // }
    vp.erase(vp.begin()+1, vp.begin()+3);
    // vp.insert(vp.begin(),{100,200});

    vector<pair<int,int>> copy(2,{1000,2000});
    vp.insert(vp.begin(),copy.begin(), copy.end());
    vp.pop_back();

    for ( it = vp.begin(); it!=vp.end(); ++it)
    {
        cout << it->first << " " << it->second << " " << endl;
    }
    cout << "Size of the vector is " << vp.size();
    

    vp.clear();
    // cout  << vp.empty();
    return 0;
}
