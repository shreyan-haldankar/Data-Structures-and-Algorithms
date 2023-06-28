#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> arr[i];
	}


	for (int i = 0; i <= n-1; ++i)
	{
		int j = i;
		while(j>0 && arr[j-1] > arr[j]){
			swap(arr[j-1], arr[j]);
			j--;
		}
	}


	for (int i = 0; i < n; ++i)
		{
			/* code */
			cout << arr[i] << " ";
		}
	return 0;
}