#include <iostream>
#include <bits/stdc++.h>

int board[20], count;

int main()
{
    int n, i, j;
    void queen(int row, int n);
    std::cout << " - N Queens Problem Using Backtracking -";
    std::cout << "\n\nEnter number of Queens: ";
    std::cin >> n;
    queen(1, n);
    return 0;
}

void print(int n)
{
    int i, j;

    std::cout << "\n\nSolution " << ++count << "\n\n";

    for (i = 1; i <= n; ++i)
    {

        std::cout << "\n";
        std::cout << "\n\t" << i;

        for (j = 1; j <= n; ++j)
        {
            if (board[i] == j)
                std::cout << "\tQ";
            else
                std::cout << "\t-";
        }
    }
}

int place(int row, int column)
{
    int i;
    for (i = 1; i <= row - 1; ++i)
    {

        if (board[i] == column)
            return 0;
        else if (abs(board[i] - column) == abs(i - row))
            return 0;
    }

    return 1;
}

void queen(int row, int n)
{
    int column;
    for (column = 1; column <= n; ++column)
    {

        if (place(row, column))
        {
            board[row] = column;

            if (row == n)
                print(n);
            else
                queen(row + 1, n);
        }
    }
}
