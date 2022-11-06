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
    for ( it = vp.begin(); it!=vp.end(); ++it)
    {
        cout << it->first << " " << it->second << " " << endl;
    }
    

    return 0;
}
