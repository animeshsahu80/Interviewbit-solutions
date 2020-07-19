int Solution::trailingZeroes(int A) {
    int ans=0;
    while(A>0){
        A/=5;
        ans+=A;
    }
    return ans;
}
