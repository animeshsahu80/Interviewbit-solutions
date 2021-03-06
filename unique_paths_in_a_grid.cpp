int Solution::uniquePathsWithObstacles(vector<vector<int> > &A) {
    int r=A.size();
    int c=A[0].size();
    if(A[r-1][c-1])
        return 0;
    vector<vector<int>> dp(r,vector<int>(c,0));
    for(int i=0;i<c;i++){
        if(A[0][i]==1){
            break;
        }
        dp[0][i]=1;
    }
    for(int i=0;i<r;i++){
        if(A[i][0]==1){
            break;
        }
        dp[i][0]=1;
    }
    for(int i=1;i<r;i++){
        for(int j=1;j<c;j++){
            if(A[i][j]==1)
                dp[i][j]=0;
            else
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    
    return dp[r-1][c-1];
}
