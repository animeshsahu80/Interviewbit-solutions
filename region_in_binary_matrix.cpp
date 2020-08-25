
void dfs(vector<vector<int> > &A,int& ans,int i,int j){
    if(i<0 || j<0 || i>=A.size() || j>=A[0].size() || A[i][j]==0){
        return ;
    }
    ans++;
    A[i][j]=0;
    dfs(A,ans,i+1,j);
    dfs(A,ans,i+1,j+1);
    dfs(A,ans,i,j+1);
    dfs(A,ans,i-1,j+1);
    dfs(A,ans,i-1,j);
    dfs(A,ans,i-1,j-1);
    dfs(A,ans,i,j-1);
    dfs(A,ans,i+1,j-1);
    return;
    
}


int Solution::solve(vector<vector<int> > &A) {
    int ret=INT_MIN;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            
            if(A[i][j]){
                int ans=0;
                dfs(A,ans,i,j);
                ret=max(ans,ret);
            }
        }
    }
    return ret;
}
