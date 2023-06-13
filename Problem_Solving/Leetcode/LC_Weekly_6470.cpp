#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        for(auto it: nums) {
        	if(it!=min && it!=max){
        		return it;
        	}
        	
        }
        return -1;
        
    }
};

int main()
{
    Solution s;
    vector<int> nums = {3,2,1,4};
    s.findNonMinOrMax(nums);
    return 0;
}