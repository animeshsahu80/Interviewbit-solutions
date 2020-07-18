int Solution::hammingDistance(const vector<int> &A) {
    long long int ans=0;
    for(int i=0;i<32;i++){
        int count=0;
        for(int j=0;j<A.size();j++){
            if(A[j]& 1<<i)
                count++;
        }
        ans+=2*count*(A.size()-count);
        ans%=1000000007;
    }
    return int(ans);
}
