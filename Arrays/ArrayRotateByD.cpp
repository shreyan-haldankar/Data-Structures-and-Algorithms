#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& arr, int d) {
        int n = arr.size();
        d%=n;
        vector<int> temp;
        for(int i=0;i<d;i++){
            temp.push_back(arr[i]);
        }
        for(int i=0;i<n-d;i++) {
            arr[i] = arr[i+d];
        }

        for(int i=n-d; i<n;i++) {
            arr[i] = temp[i-(n-d)];
        }
        
    }
};

void printArray(vector<int> &arr, int size)
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
        int elem;
        cin >> elem;
        arr.push_back(elem);

    cin >> d;
    Solution ob;
    ob.rotate(arr, d);
    printArray(arr, n);
    }
    return 0;
}