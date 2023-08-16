#include <bits/stdc++.h>
using namespace std;
// LongestSubArraywithSumK

// // BruteForce
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     int length = 0;
//     for(int i = 0;i < a.size(); i++) {
//         for(int j=i;j<a.size();j++) {
//             int sum = 0;
//             for(int k=i;k<=j; k++) {
//                 sum += a[k];
//             }
//             if(sum==k){
//                 length = max(length, j-i+1);
//             }
//         }
//     }
//     return length;
    
// }

// Optimal Brute
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     int length = 0;
//     for(int i = 0;i < a.size(); i++) {
//         int sum = 0;
//         for(int j=i;j<a.size();j++) {
//             sum+=a[j];    
//             if(sum == k) {
//                 length = max(length, j-i+1);
//             }
//         }
//     }
//     return length;
    
// }


// Better approach IMP question
// int longestSubarrayWithSumK(vector<int> a, long long k) {
//     // Write your code here
//     map<long long, int> preSumMap;
//     long long sum = 0;
//     int maxLeng = 0;    
//     for(int i=0;i< a.size(); i++) {
//         sum += a[i];
//         if (sum==k){
//             maxLeng = max(maxLeng, i+1);
//         }
//         int rem = sum - k;
//         if(preSumMap.find(rem)!=preSumMap.end()){

//             int len = i - preSumMap[rem];
//             maxLeng = max(maxLeng, len);
//         }
//         if (preSumMap.find(sum) == preSumMap.end()) {
//             preSumMap[sum] = i;
//         }
//     }
//     return maxLeng;
// }

// Optimal Approach
int longestSubarrayWithSumK(vector<int>&a, long long k) {
    // Write your code here
    int left= 0, right =0;
    int n = a.size();
    long long sum = a[0];
    int maxLen =0;
    while(right<n){
        while(left<=right && sum>k){
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left +1);
            cout << maxLen << endl;
        }
        right++;
        if(right<n)
        {
            sum += a[right];
        }


    }
    cout << maxLen << " ";
    return maxLen;
}

void printArray(vector<int> &arr, int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n,T,i;
    long long k;
    int elem;
    int maxLength;
    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    // int arr[n+1];
    vector<int> arr;
    for(i=0;i<n;i++)
        cin >> elem;
        arr.push_back(elem);
    // scanf("%d",&k);
    cin >> k;

    // Solution ob;
    maxLength = longestSubarrayWithSumK(, 3);
    // printArray(arr, n);
    cout << maxLength;
    }
    return 0;
}