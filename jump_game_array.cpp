
int solve(int cp,vector<int>& A,vector<int>& dp){
    if(cp==A.size()-1)
        return 1;
    if(A[cp]==0)
        return 0;
    if(dp[cp]!=-1)
        return dp[cp];
    int ans=0;
    for(int i=1;i<=A[cp];i++){
        if(cp+i<A.size())
            ans=ans || solve(cp+i,A,dp); 
    }
    return dp[cp]=ans;
}


int Solution::canJump(vector<int> &A) {
    vector<int> dp(A.size()+1,-1);
    int ans=solve(0,A,dp);
    return ans;
}
