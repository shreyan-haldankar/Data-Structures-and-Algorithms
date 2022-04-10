#include <iostream>
#include <bits/stdc++.h>
#define INF 999
#define n 4
using namespace std;

void print_solution(int graph[][n]);

void print_graph(int matrix[][n])
{
    int i, j;
    cout << "The items in the graph are as follows \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] == INF)
            {
                cout << "INF"
                     << "    ";
            }
            else
            {
                cout << matrix[i][j] << "   ";
            }
        }
        cout << endl;
    }
}

int floyd_warshall(int graph[][n])
{
    int matrix[n][n];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {

            matrix[i][j] = graph[i][j];
        }
    }

    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                // Formula : A[i][j] = min(A(k-1)[i,j],A(k-1)[i,k]+A(k-1)[j,k]))
                if (matrix[i][j] > (matrix[i][k] + matrix[k][j]) && (matrix[i][k] != INF && matrix[k][j] != INF))
                {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
            }
        }
    }
    print_graph(matrix);
    return 0;
}

int main()
{
    cout << "Floyd Warshall Algorithm\n";
    int graph[n][n] = {{0, 3, INF, 7},
                       {8, 0, 2, INF},
                       {5, INF, 0, 1},
                       {2, INF, INF, 0}};

    // cout << n;
    floyd_warshall(graph);
    return 0;
}