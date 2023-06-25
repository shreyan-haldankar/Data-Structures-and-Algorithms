#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
		vector<int> ans;
		unordered_map<int, int> mpp;
		for(auto it: nums){
			mpp[it]++;
		}        
		priority_queue<pair<int,int>> maxQ;
		for(auto it: mpp){
			maxQ.push({it.second, it.first});
		}
		while(k--){
			ans.push_back(maxQ.top().second);
			maxQ.pop();
		}
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends