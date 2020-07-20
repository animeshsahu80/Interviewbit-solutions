int Solution::sqrt(int A) {
    long long int l=0,r=A;
    long long int mid;
    long long int ans;
    while(l<=r){
        mid=(l+r)/2;
        if(mid*mid==A){
            ans=mid;
            break;
        }
        else if(mid*mid<A){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return ans;
}
