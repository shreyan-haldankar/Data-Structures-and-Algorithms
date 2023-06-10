#include<bits/stdc++.h>
using namespace std;

int main() {
	list<int> v;
	v.push_back(2);
	for(auto it: v) {
		cout << it;
	}
	cout << "\n";
	v.emplace_back(4);
	for(auto it: v) {
		cout << it << " ";
	}
	cout << "\n";

	v.push_front(10);
	for(auto it: v) {
		cout << it << " ";
	}
}