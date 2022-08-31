#include <bits/stdc++.h>

using namespace std;

bool contains(vector<int> vec, int &elem)
{
    bool result = false;
    if (find(vec.begin(), vec.end(), elem) != vec.end())
    {
        result = true;
    }
    return result;
}

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
        unordered_set<int> list;
        bool flag = false;

        for (int i = 0; i < N; i++)
        {
            int elem;
            cin >> elem;
            if (!flag)
            {
                // bool exists = find(arr, arr + n, target) != arr + n;
                // for (int k ;k<list.size();k++)
                // {
                //     if (k == elem)
                //     {
                //         exists = true;
                //         // break;
                //     }
                // }
                // if (contains(list, elem))
                if (list.find(elem) != list.end())
                {
                    flag = true;
                }
            }
            list.insert(elem);
        }

        if (list.size() % 2 != 0)
        {
            if (flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
