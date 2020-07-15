int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++){
        int num=A[i];
        int index=i;
        while(index+1<A.size()&&A[index+1]==num){
            index++;
        }
        if(A.size()-index-1==num)
            return 1;
    }
    return -1;
}
