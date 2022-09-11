#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
    
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int N;
        N = 2 ;
        int lst_[N];

        // auto values = getSeparatedValuesFromUser<int>();
        for (int i = 0; i < N; i++)
        {
            cin >> lst_[i];
        }
        int mean = lst_[0];
	    int median = lst_[1];
        int a = 0,b, c = 0;
        b = median;
        for (int i = 0; i < 250; i++)
        {   
            int cond;
            a += 1;
            cond = 3*mean - a - b;
            if (c==cond)
            {
                cout << a << " " << b << " " << c << endl;
            }
        }
        
    }

    return 0;
}
