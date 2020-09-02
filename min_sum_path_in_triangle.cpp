int Solution::minimumTotal(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int r=A.size();
    for(int i=1;i<r;i++){
        A[i][0]+=A[i-1][0];
    }
    
    for(int i=1;i<r;i++){
        A[i][A[i].size()-1]+=A[i-1][A[i-1].size()-1];
    }
    
    for(int i=2;i<A.size();i++){
        for(int j=1;j<A[i].size()-1;j++){
            A[i][j]+=min(A[i-1][j],A[i-1][j-1]);
        }
    }
    int n=A[r-1].size();
    int ans=INT_MAX;
    
    for(int i=0;i<n;i++){
        ans=min(A[r-1][i],ans);
    }
    
    return ans;
}
