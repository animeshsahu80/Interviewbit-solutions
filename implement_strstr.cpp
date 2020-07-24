int Solution::strStr(const string A, const string B) {
    int h=A.size();
    int n=B.size();
    if(h==0 || n==0){
        return -1;
    }
    
    for(int i=0;i<=h-n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(A[i+j]!=B[j]){
                break;
            }
            count++;
        }
        if(count==n)
            return i;
    }
    return -1;
    
}
