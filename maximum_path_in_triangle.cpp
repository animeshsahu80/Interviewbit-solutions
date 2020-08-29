int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                A[i][j]+=A[i-1][j];
            }
            else{
                A[i][j]+=max(A[i-1][j],A[i-1][j-1]);
            }
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<A[0].size();i++){
        ans=max(ans,A[A[0].size()-1][i]);
    }
    return ans;
}
