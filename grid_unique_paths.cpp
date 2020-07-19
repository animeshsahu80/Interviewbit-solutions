int Solution::uniquePaths(int A, int B) {
    vector<vector<int>> res(A,vector<int>(B,0));
    for(int i=0;i<A;i++){
        res[i][0]=1;
    }
    for(int i=0;i<B;i++){
        res[0][i]=1;
    }
    for(int i=1;i<A;i++){
        for(int j=1;j<B;j++){
            res[i][j]=res[i-1][j]+res[i][j-1];
        }
    }
    return res[A-1][B-1];
}
