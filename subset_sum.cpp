int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int n=A.size();
    vector<vector<int>> dp(n,vector<int>(B+1,0));
    
    for(int i=0;i<n;i++){
        dp[i][0]=1;
    }
    for(int i=1;i<=B;i++){
        if(A[0]==i)
            dp[0][i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=B;j++){
            if(A[i]>j)
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j] || dp[i-1][j-A[i]];
        }
    }
    return dp[n-1][B];
}
