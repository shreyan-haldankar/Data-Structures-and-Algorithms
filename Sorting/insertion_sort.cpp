// #include <bits/stdc++.h>

// using namespace std;
// int main(int argc, char const *argv[])
// {
//     cout << "Insertion sort" << endl;
//     // Suppose we have an array, there are two parts to it
//     // Sorted and Unsorted
//     // We pick element from unsorted array and insert it into sorted array
//     // Hence after each iteration our unsorted array gets smaller and the sorted array gets larger

//     // First, we will consider the left part as sorted
//     // We will compare the first element with i+1th element
//     // We will store the minimum element among the two in a temporary variable called temp
//     // If the first element is greater than that temp variable
//     // we will shift the first element to the right side into the sorted array
//     // so the first two elements get sorted in the sorted array

//     // Now we will put the next element into temp
//     // i.e 3rd element
//     // Then we will compare it will the elements in the sorted array and insert the temp into the sorted array in a sorted order

//     // Code
//     int n;
//     cout << "ENter number of elements in the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "\nUnsorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int temp;
//         temp = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > temp)
//         {

//             // Comparing the elements
//             // Then we shift the greater element towards the right
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = temp;
//     }

//     cout << "\nSorted array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// Practice
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{

    cout << "Insertion Sort" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorted part --- unsorted part
    // the first element is always sorted

    // Outer loop will be the unsorted part
    for (int i = 1; i < n; i++)
    {
        int temp;
        temp = i;
        int j;
        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// It is an inplace sorting algorithm