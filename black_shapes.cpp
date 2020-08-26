void dfs(vector<string> &A,int x,int y){
    if(x<0 || y<0 || x>=A.size() || y>=A[0].size() || A[x][y]=='O')
        return;
    A[x][y]='O';
    dfs(A,x+1,y);
    dfs(A,x-1,y);
    dfs(A,x,y+1);
    dfs(A,x,y-1);
    return;
}

int Solution::black(vector<string> &A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]=='X'){
                dfs(A,i,j);
                ans++;
            }
        }
    }
    return ans;
}
