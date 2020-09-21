int Solution::solve(vector<int> &A, int B) {
    if(A.size()<2)
        return 0;
    if(B>A.size()/2){
        int res=0;
        for(int i=1;i<A.size();i++){
            if(A[i]>A[i-1])
                res+=A[i]-A[i-1];
        }
        return res;
    }
    vector<vector<int>> dp(B+1,vector<int>(A.size(),0));
    for(int i=1;i<=B;i++){
        for(int j=1;j<A.size();j++){
            int no_sell=dp[i][j-1];
            int sell=0;
            for(int p=0;p<j;p++){
                sell=max(sell,A[j]-A[p]+ dp[i-1][p]);
            }
            dp[i][j]=max(sell,no_sell);
        }
    }
    return dp[B][A.size()-1];
}
