vector<vector<int> > Solution::generateMatrix(int A) {
    int n=A;
    vector<vector<int>> res(n, vector<int>(n,0));
    int rs=0;
    int re=n-1;
    int cs=0;
    int ce=n-1;
    int count=1;
    while(rs<=re && cs<=ce){
        for(int i=cs;i<=ce;i++){
            res[rs][i]=count;
            count++;
        }
        rs++;
        for(int i=rs;i<=re;i++){
            res[i][ce]=count;
            count++;
        }
        ce--;
        if(rs<=re){
            for(int i=ce;i>=cs;i--){
                res[re][i]=count;
                count++;
            }
        }
        re--;
        if(cs<=ce){
            for(int i=re;i>=rs;i--){
                res[i][cs]=count;
                count++;
            }
        }
        cs++;
    }
    return res;
}
