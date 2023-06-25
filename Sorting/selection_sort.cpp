// #include <bits/stdc++.h>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: ";
//     for (int x = 0; x < n; x++)
//     {
//         cin >> arr[x];
//     }

//     cout << "Unsorted Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     for (int i = 0; i < n - 1; i++)
//     {
//         int min_ind;
//         min_ind = i;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min_ind])
//             {
//                 min_ind = j;
//             }
//         }

//         if (min_ind != i)
//         {
//             swap(arr[i],arr[min_ind]);
//         }
//     }
//     cout << "\nSorted Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// Time Complexity : O(n^2)
// Space Complexity: O(1)

// Practice
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }
        if (min_ind != 0)
        {
            swap(arr[i], arr[min_ind]);
        }
    }
    cout << "\nSorted array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
