#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int partitionArray(int arr[], int low, int high) {
      int i=low, j = high, pivot = low;

      while(i<j) {
        while(arr[i]<=arr[pivot] && i<=high-1) {
          i++;
        }
        while(arr[j]>arr[pivot] && j>=low+1) {
          j--;
        }
        if(i<j){
          swap(arr[i], arr[j]);
        }
      }
      swap(arr[pivot], arr[j]);
      return j;
    }
  public:
    void quickSort(int arr[], int low, int high) {
      if(low<high) {
        int partitionIndex;
        partitionIndex = partitionArray(arr, low, high);
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex +1, high);
      }
    }
};



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

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
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}