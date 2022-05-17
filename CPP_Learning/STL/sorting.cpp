#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    
    // sort() function is used to sort an array, vector or a string
    // It uses O(nlogn) time complexity
    
    // If you want to sort an array give the pointer of the first element and the pointer of the element after the last element
    // int a[n];
    // sort(a, a+n)
    // E.g:
    // int a[4] = {20,50,30,49};
    // sort(a,a+4); // Give pointer of the element that is on the last element
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << a[i] << endl;
    // }
    
    
    // In vectors and strings we will use iterators
    // vector<int> v;
    // sort(v.begin(), v.end());


    vector<int> v = {10,40,20,9};
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;

}
