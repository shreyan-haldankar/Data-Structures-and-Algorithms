//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
    	vector<int> temp;
    	int lp = l, rp=m+1;
    	while(lp<=m && rp<=r){
    		if(arr[lp]<=arr[rp]){
    			temp.push_back(arr[lp]);
    			lp++;
    		}
    		else{
    			temp.push_back(arr[rp]);
    			rp++;
    		}
    	}
    	while(lp<=m){
    		temp.push_back(arr[lp]);
    		lp++;
    	}
    	while(rp<=r){
    		temp.push_back(arr[rp]);
    		rp++;
    	}
    	for (int i = l; i <= r; i++)
    	{
    		arr[i] = temp[i-l];
    	}
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if (l>=r)
        {
        	return;
        }
        int mid;
        mid = (l+r)/2 ;
        mergeSort(arr,l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends