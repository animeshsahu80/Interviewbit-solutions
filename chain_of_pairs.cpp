int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    vector<int>lis(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[j][1]<A[i][0]){
                lis[i]=max(lis[i],lis[j]+1);
            }
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,lis[i]);
    }
    return ans;
}
