// Selection Sort
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		int min_ind = i;
		for (int j = i+1; j < n; j++)
		{
			if(arr[j] < arr[min_ind]) {
				min_ind = j;
			}
		}

		if(min_ind!=0){
			swap(arr[i], arr[min_ind]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}

// T.C = O(n^2)
// S.C = O(1)