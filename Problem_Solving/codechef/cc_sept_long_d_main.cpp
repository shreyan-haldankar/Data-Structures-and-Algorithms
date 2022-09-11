#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;cin>>n;
	vector<int>a(n,0);
	for(int i=0;i<n;i++)
		cin>>a[i];
    
    set<int>lst_set;
	for(int i=0;i<n;i++){
		lst_set.insert(a[i]);
	}
	vector<int>good_pair_count;
	long long final_num = 0;
	
	long long num_count = 0;
	for(auto i:lst_set){
		num_count=count(a.begin(), a.end(), i);
		if(num_count>1){
			long long sum_num=0;
			// for(int j=1;j<num_count;j++){
			// 	sum_num += j;
			// }
            sum_num = num_count*(num_count-1)/2;
			final_num += sum_num;
			// good_pair_count.push_back(final_num);
		}
	}
	// long long s=0;
	// for(auto i:a)
	// 	s+=i;
	// cout<<s<<"\n";
    cout << final_num << endl;
}

int main(){
	int t;cin>>t;
	while(t--)
		solve();
	return 0;
}