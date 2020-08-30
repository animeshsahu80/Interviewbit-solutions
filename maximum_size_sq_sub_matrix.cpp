int Solution::solve(vector<vector<int> > &A) {
    for(int i=1;i<A.size();i++){
        for(int j=1;j<A[0].size();j++){
            if(A[i][j])
            A[i][j]+=min(A[i-1][j-1],min(A[i][j-1],A[i-1][j]));
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            ans=max(ans,A[i][j]);
        }
    }
    return ans*ans;
}
