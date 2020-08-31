int Solution::longestSubsequenceLength(const vector<int> &A) {
    int n=A.size();
    vector<int> l_t_r(n,1);
    vector<int> r_t_l(n,1);
    if(A.size()==0)
        return 0;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(A[i]>A[j]){
                l_t_r[i]=max(l_t_r[j]+1,l_t_r[i]);
            }
        }
    }
    vector<int> B=A;
    reverse(B.begin(),B.end());
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(B[i]>B[j]){
                r_t_l[i]=max(r_t_l[j]+1,r_t_l[i]);
            }
        }
    }
    reverse(r_t_l.begin(),r_t_l.end());
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,r_t_l[i]+l_t_r[i]);
    }
    return ans-1;
}
