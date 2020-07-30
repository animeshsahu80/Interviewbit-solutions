int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    int temp;
    while(i<A.size()&&j<B.size()&&k<C.size()){
        temp=max(max(abs(A[i]-B[j]),abs(B[j]-C[k])),abs(A[i]-C[k]));
        if(temp<ans){
            ans=temp;
        }
        if(A[i]>=B[j]&&B[j]<=C[k])
            j++;
        else if(A[i]<=B[j]&&A[i]<=C[k])
            i++;
        else
            k++;
    }
    return ans;
}
