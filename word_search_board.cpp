void dfs(int& ans,vector<string> &A,string& B,int x,int y,int count){
    if(count==B.size()){
        ans=1;
        return;
    }
    if(x<0 || y<0 || x>=A.size() || y>=A[0].size() || A[x][y]!=B[count]){
        return;
    }

    dfs(ans,A,B,x+1,y,count+1);
    dfs(ans,A,B,x,y+1,count+1);
    dfs(ans,A,B,x-1,y,count+1);
    dfs(ans,A,B,x,y-1,count+1);

    return;
}

int Solution::exist(vector<string> &A, string B) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(A[i][j]==B[0]){
                dfs(ans,A,B,i,j,0);
                if(ans)
                    return 1;
            }
        }
    }
    return ans;
}
