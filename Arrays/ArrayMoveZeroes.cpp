#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums,int n) {
        int j=-1;
        // int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j==-1) {
            return;
        }

        for(int i=j+1;i<n;i++) {
            if(nums[i]!=0){
                swap(nums[j], nums[i]);
                j++;
            }
        }
        return;
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
    int elem;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    // int arr[n+1];
    vector<int> arr;
    for(i=0;i<n;i++)
        cin >> elem;
        arr.push_back(elem);

    Solution ob;
    ob.moveZeroes(arr, n);
    printArray(arr, n);
    }
    return 0;
}