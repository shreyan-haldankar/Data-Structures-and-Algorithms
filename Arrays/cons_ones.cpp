#include <bits/stdc++.h>

using namespace std;

int findZeroes(int arr[], int n, int m)
{
    // code here
    int Ms = m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 && Ms > 0)
        {
            arr[i] = 1;
            // count++;
            Ms--;
        }

        

        
    }


    for (int i = 0; i < n; i++)
    {
        /* code */
        if (arr[i] == arr[i + 1] && arr[i] == 1)
        {
            count++;
        }
        // if (arr[i - 1] == arr[i] && arr[i] == 1)
        // {
        //     count++;
        // }
    }
    
    return count;
}

int main()
{
    int n, m;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;

    
    cout << "Solution is " << findZeroes(arr, n, m);;
    
    return 0;
}