int Solution::firstMissingPositive(vector<int> &A) {
    int n=A.size();
    bool flag=false;
    for(int i=0;i<n;i++){
        if(A[i]==1)
            flag=true;
    }
    if(!flag)
        return 1;
    for(int i=0;i<n;i++){
        if(A[i]<=0 || A[i]>n){
            A[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        int idx=abs(A[i]);
        if(idx<n){
            A[idx]=-1*abs(A[idx]);
        }
        else{
            A[0]=-1*abs(A[idx]);
        }
    }
    for(int i=1;i<n;i++){
        if(A[i]>0)
            return i;
    }
    if(A[0]>0)
            return n;
        
    return n+1;
}
