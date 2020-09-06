int Solution::maxProfit(const vector<int> &A) {
    int n=A.size();
    if(n==0)
        return 0;
    vector<int> left(n);
    vector<int> right(n);
    int min_price=A[0];
    left[0]=0;
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],A[i]-min_price);
        min_price=min(min_price,A[i]);
    }
    right[n-1]=0;
    int max_price=A[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],max_price-A[i]);
        max_price=max(max_price,A[i]);
    }
    int profit=right[0];
    for(int i=1;i<n;i++){
        profit=max(profit,right[i]+left[i-1]);
    }
    return profit;
}
