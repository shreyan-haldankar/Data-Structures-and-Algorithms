#include <bits/stdc++.h>
using namespace std;



// Maps
int main() {
	// key, val
	map<int, int> mpp;
	// unordered_map<int, int> mpp;

	mpp.insert({2,1});
	mpp[1] = 3;
	// mpp.emplace({2,4});
	mpp.insert({3,10});
	for(auto it: mpp){
		cout << it.first << " " << it.second << endl ;
	}
	return 0;
}