int coeff(int n, int k){
    if(k==0 || k==n)
        return 1;
    if(k>n-k)
        k=n-k;
    int ans=1;
    for(int i=0;i<k;i++){
        ans*=(n-i);
        ans/=i+1;
    }
    return ans;
}


vector<int> Solution::getRow(int A) {
    int n=A;
    vector<int> res;
    for(int i=0;i<=n;i++){
        res.push_back(coeff(n,i));
    }
    return res;
}
