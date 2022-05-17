#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (ind == arr.size())
    {
        if (target == 0)
        {
            ans.push_back(ds);
        }
        return;
    }

    if (arr[ind] <= target)
    {
        ds.push_back(arr[ind]);
        findCombination(ind, target, arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    int ind;
    vector<int> ds;
    vector<vector<int>> ans;

    findCombination(ind, target, candidates, ans, ds);
    return ans;
}

int main(int argc, char const *argv[])
{
    

    return 0;
}
