    #include<bits/stdc++.h>
    using namespace std;
     
    void solve(){
    	int n ;cin>>n;
     
    	long long cnt=0;
    	cnt+=n;
     
    	if(n==1){
    		cout<<n<<endl;
    		return;
    	}
     
    	int f=n/3;
    	bool flag=false;
        if(n%2==0)flag=true;
    	if(n%3==0)flag=true;
        
     
    	// if(flag){
    		cnt+=(f*4);
            long long x=n-f;
    		if(x%2==0){
    			cnt+=(x/2);
    		}else{
    			cnt+=((x/2)+1);
    		}
    	// }else{
    		// cnt=cnt+(f*4);
    		// long long x=n-f;
    		// if(x%2==0){
    		// 	cnt+=(x/2);
    		// }else{
    		// 	cnt+=((x/2)+1);
    		// }
    	// }
     
    	cout<<cnt<<endl;
    }
     
    int main(){
    	int t;cin>>t;
    	while(t--)
    		solve();
    	return 0;
    }