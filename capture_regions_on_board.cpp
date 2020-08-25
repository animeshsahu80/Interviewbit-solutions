
void dfs(vector<vector<char> > &A,int i,int j){
    if(i<0 || j<0 || i>=A.size() || j>=A[0].size() || A[i][j]=='X' || A[i][j]=='#')
        return;
    A[i][j]='#';
    dfs(A,i+1,j);
    dfs(A,i,j-1);
    dfs(A,i-1,j);
    dfs(A,i,j+1);
    return;
}
void Solution::solve(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int r=A.size();
    int c=A[0].size();
    if(r==1 && c==1 && A[0][0]=='O')
        return;
    for(int i=0;i<r;i++){
        if(A[i][0]=='O'){
            dfs(A,i,0);
        }
    }
    for(int i=0;i<r;i++){
        if(A[i][c-1]=='O'){
            dfs(A,i,c-1);
        }
    }
    for(int i=0;i<c;i++){
        if(A[0][i]=='O'){
            dfs(A,0,i);
        }
    }
    for(int i=0;i<c;i++){
        if(A[r-1][i]=='O'){
            dfs(A,r-1,i);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            
            if(A[i][j]=='O')
                A[i][j]='X';
            if(A[i][j]=='#')
                A[i][j]='O';
        }
    }
    return;
}
