int Solution::solve(vector<vector<int> > &A) {
    
    
    for(int i=1;i<A.size();i++){
        for(int j=0;j<3;j++){
            int count=0;
            int temp=INT_MAX;
            while(count<3){
                if(count!=j){
                    temp=min(temp,A[i-1][count]);
                }
                count++;
            }
            A[i][j]+=temp;
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<3;i++){
        ans=min(ans,A[A.size()-1][i]);
    }
    return ans;
}
