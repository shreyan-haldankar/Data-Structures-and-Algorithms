#include <bits/stdc++.h>
using namespace std;

void searchPattern(char *text, char *pattern)
{
    int N = strlen(text);
    int M = strlen(pattern);

    for (int i = 0; i < N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == M)
        {
            cout << "Pattern found at index: " << i << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    char text[100];
    char pattern[100];
    cout << "Enter the text: " ;
    cin >> text;
    cout << "Enter the pattern: " ;
    cin >> pattern;
    cout << "Text:    " << text << endl;
    cout << "Pattern: " << pattern << endl;
    searchPattern(text, pattern);

    return 0;
}
