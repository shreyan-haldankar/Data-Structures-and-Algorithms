#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

class Solution {
public:
    string smallestString(string s) {
        string all = "abcdefghijklmnopqrstuvwxyz";

        for(string::size_type i = 0; i < s.size(); i++){
            if(strcmp(s[i], 'a') == 0) {
                int ind;
                ind = all.find(s[i]);
                s[i] = all[ind--];
            }
        } 
        return s;

    }

};

int main()
{
    Solution s;
    string str1 = "cbabc";
    s.smallestString(str1);
    return 0;
}