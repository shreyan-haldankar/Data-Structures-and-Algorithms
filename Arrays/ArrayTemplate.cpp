#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        cout << "hi";
        int n = arr.size();
        d%=n;
        vector<int> temp;
        for(int i=0;i<d;i++){
            temp.push_back(arr[i]);
        }
        for(int i=d;i<n;i++) {
            arr[i-d] = arr[i];
        }

        for(int i=n-d; i<n;i++) {
            arr[i] = temp[i-(n-d)];
        }
       for(auto it: arr) {
        cout << it << "dfsd";
        } 
    }
};

void printArray(vector<int>&arr, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n,T,i,d;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    // int arr[n+1];
    vector<int> arr;
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    scanf("%d",&arr[i]);

    Solution ob;
    ob.rotate(arr,d);
    printArray(arr, n);
    }
    return 0;
}