#include <bits/stdc++.h>

using namespace std;

// template <typename T>
// vector<T> getSeparatedValuesFromUser(char separator = ',')
// {
//     stringstream ss;
//     string str;
//     getline(cin, str);
//     replace(str.begin(), str.end(), separator, ' ');
//     ss << str;

//     T value{0};
//     vector<T> values;
//     while (ss >> value)
//     {
//         values.push_back(value);
//     }

//     return values;
// }

int deleteElement(int arr[], int n, int x)
{
    // Search x in array
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            break;

    // If x found in array
    if (i < n)
    {
        // reduce size of array and move all
        // elements on space ahead
        n = n - 1;
        for (int j = i; j < n; j++)
            arr[j] = arr[j + 1];
    }

    return n;
}

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int N, K, N_new;
        // list<int> lst_A;
        // list<int> lst_B;
        cin >> N;
        int lst_A[N];

        // auto values = getSeparatedValuesFromUser<int>();
        for (int i = 0; i < N; i++)
        {
            cin >> lst_A[i];
        }
        cin >> K;
        int lst_B[K];
        for (int i = 0; i < K; i++)
        {
            int x;
            cin >> lst_B[i];
            x = lst_B[i];
            // int y;
            // cin >> y;
            // lst_B.push_back(y);
            // lst_A.remove(y);
            N = deleteElement(lst_A, N, x);
            N_new = N;
        }
        for (int i = 0; i < N_new; i++)
        {
            cout << lst_A[i] << " ";
        }
        cout << endl;

        /* code */
    }

    return 0;
}
