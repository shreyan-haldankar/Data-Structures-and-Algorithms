#include <bits/stdc++.h>
using namespace std;



// Bruteforce approach
// int findOcc(int a, int arr[], int n) {
// 	int count = 0;
// 	for(int j = 0;j<n; j++) {
		
// 		if(arr[j] == a){
// 			count++;
// 		}
// 	}
// 	return count;
// }


// int main() {
// 	int n, q;
// 	cin >> n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin >> arr[i];
// 	}
// 	cin>>q;
// 	for(int i=0;i<q;i++){
// 		int a, res;
// 		cin >>a;
// 		res = findOcc(a, arr, n);
// 		cout << res << " ";
// 	}
// 	cout << "\n";
// 	return 0;
// }	


//Sub-optimal - Using Hashing
// Number hashing - Prestoring and fetching
int main() {
	int n, q;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	// precomputing
	int hash[13] = {0};
	for(int i=0; i<n;i++) {
		hash[arr[i]]++;
	}

	cin>>q;
	for(int i=0;i<q;i++){
		int a, res;
		cin >>a;
		res = hash[a];
		cout << res << " ";
	}
	cout << "\n";
	return 0;
}	


// Character hashing
// Character hashing - Prestoring and fetching
// int main() {
// 	int q;
// 	string s;
// 	cin >> s;

// 	// precomputing
// 	int hash[256] = {0};
// 	for(int i=0; i<s.size();i++) {
// 		hash[s[i]]++;
// 	}

// 	cin>>q;
// 	for(int i=0;i<q;i++){
// 		int res;
// 		char c;
// 		cin >>c;
// 		res = hash[c];
// 		cout << res << " ";
// 	}
// 	cout << "\n";
// 	return 0;
// }	



