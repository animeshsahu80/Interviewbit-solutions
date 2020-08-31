int Solution::solve(vector<vector<int> > &A) {
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A[0].size();j++){
            if(i!=0 && A[i][j]==1){
                A[i][j]=A[i-1][j]+1;
            }
        }
    }
    for(int i=0;i<A.size();i++){
        sort(A[i].begin(),A[i].end());
    }
    int max_area=0;
    for(int i=0;i<A.size();i++){
        int area=0;
        int width=1;
        for(int j=A[0].size()-1;j>=0;j--){
            area=A[i][j]*width;
            width++;
            max_area=max(max_area,area);
        }
    }
    return max_area;
}
