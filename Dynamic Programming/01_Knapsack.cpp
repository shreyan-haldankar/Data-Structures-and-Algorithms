#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n)
{
    int i, w;
    vector<vector<int>> K(n + 1, vector<int>(W + 1));

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                  K[i - 1][w - wt[i - 1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}

int main()
{
    int val[10];
    int wt[10];
    int weight;
    int i, n, result;
    // n = sizeof(val) / sizeof(val[0]);
    cout << "Enter the capacity of knapsack: ";
    cin >> weight;

    cout << "Enter the number of items : ";
    cin >> n;
    cout << "Enter the weight and value of " << n << " items: \n";
    for (i = 0; i < n; ++i)
    {
        cout << "wt[" << i << "] :\t";
        cin >> wt[i];

        cout << "val[" << i << "] :\t";
        cin >> val[i];
    }
    cout << "Weight\t"
         << "Value\n";
    for (i = 0; i < n; i++)
    {
        cout << wt[i] << "\t" << val[i] << "\n";
    }

    result = knapsack(weight, wt, val, n);
    cout << "Maximum profit is " << result;
}
