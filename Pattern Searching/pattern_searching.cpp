#include <bits/stdc++.h>

using namespace std;

void pattern_match(char *pattern, char *text)
{
    int i, j;
    int pattern_length;
    int text_length;
    pattern_length = strlen(pattern);
    text_length = strlen(text);

    for (i = 0; i <= text_length - pattern_length; i++)
    {
        for (j = 0; j < pattern_length; j++)
        {
            if (text[i + j] != pattern[j])
            {
                break;
            }
        }
        if (j == pattern_length)
        {
            cout << "Pattern found at index: " << i << endl;
        }
    }
}

int main()
{
    char text[100], pattern[100];
    // char txt[] = "AABAACAADAABAAABAA";
    // char pat[] = "AABA";
    cout << "Enter a text : ";
    cin >> text;

    cout << "Enter the pattern to match : ";
    cin >> pattern;

    cout << "\nText: " << text << "\nPattern: " << pattern << "\n\n";
    pattern_match(pattern, text);
    return 0;
}