
void solve(vector<string> &A,int i,int j,int x,int y,vector<vector<int>> &ans){
    int n=A.size();
    int m=A[0].size();
    while(i+x<n && j+y<m && i+x>=0 && j+y>=0){
        ans[i+x][j+y]++;
    if(A[i+x][j+y]=='1')
    return;
    i+=x;
    j+=y;
    }
}


vector<vector<int> > Solution::queenAttack(vector<string> &A) {

    int n=A.size();
    int m=A[0].size();
    
    vector<vector<int>> ans(n,vector<int>(m,0));
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(A[i][j]=='1'){
                solve(A,i,j,1,0,ans);
                solve(A,i,j,1,1,ans);
                solve(A,i,j,0,1,ans);
                solve(A,i,j,-1,1,ans);
                solve(A,i,j,-1,0,ans);
                solve(A,i,j,-1,-1,ans);
                solve(A,i,j,0,-1,ans);
                solve(A,i,j,1,-1,ans);
            }
        }
    }
    return ans;
}
