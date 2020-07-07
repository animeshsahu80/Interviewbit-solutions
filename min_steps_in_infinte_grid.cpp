int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans=0;
    int l=A.size();
    for(int i=1;i<l;i++){
        int x=A[i-1];
        int y=B[i-1];
        int x2=A[i];
        int y2=B[i];
        ans+=max(abs(x2-x),abs(y2-y));
    }
    return ans;

}
