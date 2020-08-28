int Solution::numDistinct(string A, string B) {
    int n=A.size();
    int m=B.size();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=0;i<=n;i++)
        dp[0][i]=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(B[i-1]!=A[j-1]){
                dp[i][j]=dp[i][j-1];
            }
            else{
                dp[i][j]=dp[i-1][j-1] + dp[i][j-1]; 
            }
        }
    }
    return dp[m][n];
}
