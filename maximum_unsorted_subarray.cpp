vector<int> Solution::subUnsort(vector<int> &A) {
    int min_val=INT_MAX;
    int n=A.size();
    for(int i=1;i<n;i++){
        if(A[i]<A[i-1]){
            min_val=min(min_val,A[i]);
        }
    }
    int max_val=INT_MIN;
    for(int i=n-2;i>=0;i--){
        if(A[i]>A[i+1]){
            max_val=max(max_val,A[i]);
        }
    }
    int l; 
    for(l=0;l<n;l++){
        if(min_val<A[l])
            break;
    }
    int r;
    for(r=n-1;r>=0;r--){
        if(max_val>A[r])
            break;
    }
    if(r-l<0){
        return {-1};
    }
    vector<int> res;
    res.push_back(l);
    res.push_back(r);
    return res;
}
