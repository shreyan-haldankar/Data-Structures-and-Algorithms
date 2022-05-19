#include <iostream>
#include <string>
using namespace std;
void naiveSearch(string s, string p)
{
    // int m,n;
    // n = strlen(s);
    // m = strlen(p);
    cout <<"String: "<< s << "\nPattern: " << p << endl;
    for (int i = 0; i <= (s.length() - p.length()); i++)
    {
        int j;
        for (j = 0; j < p.length(); j++)
        {
            if (s[i + j] != p[j])
            {
                break;
            }
        }
        if (j == p.length())
        {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    string pattern;
    cout << "Enter the pattern to be searched : ";
    cin >> pattern;
    naiveSearch(s, pattern);
    return 0;
}