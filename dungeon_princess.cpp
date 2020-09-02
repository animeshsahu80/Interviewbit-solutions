int Solution::calculateMinimumHP(vector<vector<int> > &A) {
    int r=A.size();
    int c=A[0].size();
    vector<vector<int>> dp(r,vector<int>(c));
    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            if(i==r-1&&j==c-1){
                dp[i][j]=min(0,A[i][j]);
            }
            else if(i==r-1){
                dp[i][j]=min(0,A[i][j]+dp[i][j+1]);
            }
            else if(j==c-1){
                dp[i][j]=min(0,A[i][j]+dp[i+1][j]);
            }
            else {
                dp[i][j]=min(0, A[i][j]+max(dp[i][j+1],dp[i+1][j]));
            }
        }
    }
    return  abs(dp[0][0])+1;
}
