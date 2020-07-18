int Solution::titleToNumber(string A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        ans=26*ans + (A[i]+1-'A');
    }
    return ans;
}
