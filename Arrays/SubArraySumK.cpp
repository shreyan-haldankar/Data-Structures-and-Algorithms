#include <bits/stdc++.h>
using namespace std;

// Only Positive and Zeros
class Solution {
public: 
    int subarraySum(vector<int>& nums, int k) {
        // Two point approach
        int left = 0, right = 0;
        int res = 0;
        int n = nums.size();
        long long sum = nums[0];
        while(right<n){
            while(left<=right && sum>k){
                sum -= nums[left];
                left++;
            }
            if(sum==k) {
                res++;
            }
            right++;
            if(right<n){
                sum+=nums[right];
            }
        }
        cout << res;
        return res;
    }
};

// For Positive and Negatives

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
    scanf("%d",&d);

    vector<int> arr;
    for(i=0;i<n;i++)
        cin >> elem;
        arr.push_back(elem);


    Solution ob;
    ob.subarraySum(arr, d);
    // printArray(arr, n);
    }
    return 0;
}