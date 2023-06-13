#include <bits/stdc++.h>
using namespace std;

// Number hashing
// int main() {
// 	int n, q;
// 	cin >> n;
// 	// int arr[n];
// 	// for (int i = 0; i < n; i++)
// 	// {
// 	// 	cin >> arr[i];
// 	// }
// 	map<int,int> mpp;
// 	for (int i = 0; i < n; i++)
// 	{
// 		int val;
// 		cin >> val;
// 		mpp[val]++;
// 	}

// 	for(auto it: mpp) {
// 		cout << it.first << "->" << it.second << endl;
// 	}

// 	cin >> q;
// 	for (int i = 0; i < q; i++)
// 	{
// 		int freqOf;
// 		cin >> freqOf;
// 		cout << mpp[freqOf] << endl;
// 	}
// 	return 0;
// }


// String Hashing
int main() {
	int q;
	string s;
	cin >> s;
	// int arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> arr[i];
	// }
	map<char,int> mpp;
	for (int i = 0; i < s.size(); i++)
	{
		mpp[s[i]]++;
	}

	for(auto it: mpp) {
		cout << it.first << "->" << it.second << endl;
	}

	cin >> q;
	for (int i = 0; i < q; i++)
	{
		char freqOf;
		cin >> freqOf;
		cout << mpp[freqOf] << endl;
	}
	return 0;
}