int Solution::lis(const vector<int> &A) {
    int n=A.size();
    vector<int> dp(n,1);
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j])
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,dp[i]);
    }
    return ans;
}
