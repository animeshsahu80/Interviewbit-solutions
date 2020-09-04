 int Solution::solve(int A) {
    
    vector<vector<int>> dp(A+1,vector<int>(8,0));
    
    dp[0][7]=1;
    for(int i=1;i<=A;i++){
        dp[i][0]=dp[i][0]%1000000007+dp[i-1][7]%1000000007;
        
        dp[i][1]=dp[i][1]%1000000007+dp[i-1][6]%1000000007;
        
        dp[i][2]=dp[i][2]%1000000007+dp[i-1][5]%1000000007;
        
        dp[i][3]=dp[i][3]%1000000007+dp[i-1][7]%1000000007;
        dp[i][3]=dp[i][3]%1000000007+dp[i-1][4]%1000000007;
        
        dp[i][4]=dp[i][4]%1000000007+dp[i-1][3]%1000000007;
        
        dp[i][5]=dp[i][5]%1000000007+dp[i-1][2]%1000000007;
        
        dp[i][6]=dp[i][6]%1000000007+dp[i-1][1]%1000000007;
        dp[i][6]=dp[i][6]%1000000007+dp[i-1][7]%1000000007;
        
        dp[i][7]=dp[i][7]%1000000007+dp[i-1][3]%1000000007;
        dp[i][7]=dp[i][7]%1000000007+dp[i-1][6]%1000000007;
        dp[i][7]=dp[i][7]%1000000007+dp[i-1][0]%1000000007;
    }
    return dp[A][7]%1000000007;
}