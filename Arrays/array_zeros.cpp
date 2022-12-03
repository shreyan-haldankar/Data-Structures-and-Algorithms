#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{

    // main code
    int temp[n];
    int k = 0;
    // cout << arr[4] << endl;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
        
    }
    while(k<n){
        temp[k]=0;
        k++;
    }

    for (int i = 0; i < n; i++)
    {   
        // cout << temp[i] << endl;
        
        arr[i] = temp[i];
    }

    // for(int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }ṇ
    // cout << "Hello WOrld";
}

int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Solution is ";
    pushZerosToEnd(arr,n);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
}