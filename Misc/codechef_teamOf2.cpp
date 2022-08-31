#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    // cout << "HELLO";
    int T;
    cin >> T;
    // for(int j = 0;j<T;j++)
    while (T-- > 0)
    {
        int N;
        cin >> N;
        // vector<int> list;
        vector<unordered_set<int>> list;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;

            unordered_set<int> set;

            for (int j = 0; j < x; j++)
            {
                int a;
                cin >> a;
                set.insert(a);

            }
            list.push_back(set);
        }
        sort(list.begin(), list.end());
        bool flag = false;

        for (int i = 0; i < list.size(); i++)
        {
            /* code */
            vector<int> rem_list;
            if (flag)
            {
                break;
            }

            for (int j = 0; j <= 5; j++)
            {
                /* code */
                if (!list.at(i).find(j))
                {
                    /* code */
                }
                
            }
            
        }
        
    }
}