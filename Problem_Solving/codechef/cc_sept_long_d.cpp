#include <bits/stdc++.h>

using namespace std;

// template <typename T>
// vector<T> inputAsVector(char separator = ',')
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

int main(int argc, char const *argv[])
{
    int Test;
    cin >> Test;
    while (Test-- > 0)
    {
        int N, set_count, final_num = 0, num_count = 0,final_sum=0;
        cin >> N;
        // cout << N;
        // int lst_A[N];
        // string str;
        // getline(cin, str); // For reading complete line with spaces

        // stringstream ss(str);

        // vector<int> lst_A;
        // int x;
        // while (ss >> x)
        // {
        //     lst_A.push_back(x);

        //     if (ss.peek() == ' ')
        //         ss.ignore();
        // }
        vector<int> lst_A(N,0);
        for(int i=0;i<N;i++)
	    cin>>lst_A[i];
        // auto lst_A = inputAsVector<int>();
        set<int> lst_set(lst_A.begin(), lst_A.end());
        // unordered_set<int> lst_set(lst_A, lst_A + N);
        // set_count = sizeof(lst_set)/sizeof(lst_set[0]);
        // for (int i = 0; i < lst_set.size(); i++)
        // {
        //     num_count = 1;

        // }
        vector<int> good_pair_count;


        for (int num : lst_set)
        {
            // cout << num << " ";
            num_count = count(lst_A.begin(), lst_A.end(), num);
            if (num_count > 1)
            {
                int sum_num = 0;
                for (int j = 1; j < num_count; j++)
                {
                    sum_num += j;
                }
                final_num = sum_num;
                good_pair_count.push_back(final_num);
            }
        }
        final_sum = accumulate(good_pair_count.begin(),good_pair_count.end(),0);
        cout << final_sum << endl;
    }

    return 0;
}
// int main()
// {
//     cout << "Enter , seperated values: ";
//     auto values = inputAsVector<int>();

//     //display values
//     cout << "Read values: " << endl;
//     for (auto v : values)
//     {
//         cout << v << endl;
//     }
// }