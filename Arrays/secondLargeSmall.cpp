
// Brute force approach 
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> ans{0,2};
    int larg = 0, small=0; 
    int secondlarg = 0, secondSmall=0;
    sort(a.begin(), a.end());
    larg = a[n-1];
    small = a[0];
    for(int i=n-1;i>=0;i--){
        if(a[i]!=larg){
            secondlarg = a[i];
            ans[0] = secondlarg;
            break;
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]!=small){
            secondSmall = a[i];
            ans[1] = secondSmall;
            break;

        }
    }
    return ans;
}
// T.C = O(nlogn + n)

// Better approach 
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> ans{0,2};
    int larg = 0, small=pow(10,9)-1; 
    int secondlarg = -1, secondSmall=pow(10,9);
    for(int i=0;i<n;i++){
        if(a[i]>larg){
            larg = a[i];
        }
        if(a[i]<small){
            small = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]>secondlarg && a[i]!=larg){
            secondlarg = a[i];
        }
        if(a[i]<secondSmall && a[i]!=small){
            secondSmall = a[i];
        }
    }
    ans[0]=secondlarg;
    ans[1] = secondSmall;
    return ans;

}
// T.C = O(n+n) = O(2n)

// Optimal approach
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    vector<int> ans{0,2};
    int larg = a[0], small=a[0]; 
    int secondlarg = -1, secondSmall=pow(10,9);
    for(int i=0;i<n;i++){
        if(a[i]>larg){
            secondlarg = larg;
            larg = a[i];
        }
        else if(a[i]>secondlarg){
            secondlarg=a[i];
        }
    }
    for(int j=0;j<n;j++){
        if(a[j]<small){
            secondSmall = small;
            small = a[j];
        }
        else if(a[j]<secondSmall && a[j]!=small){
            secondSmall = a[j];
        }
    }
    ans[0]=secondlarg;
    ans[1] = secondSmall;
    return ans;
}
// T.C = O(n)