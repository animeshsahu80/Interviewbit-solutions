#define mod 1000000007
int Solution::chordCnt(int A) {
    vector<long long int> dp(A+1);
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=A;i++){
        for(int j=0;j<i;j++){
            dp[i]=(dp[i]+((dp[j]%mod)*(dp[i-j-1]%mod))%mod)%mod;
        }
    }
    return int(dp[A]%mod);
}
