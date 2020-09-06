int Solution::maxProfit(const vector<int> &A) {
    int min_price=INT_MAX;
    int max_price=0;
    for(int i=0;i<A.size();i++){
        if(min_price>A[i]){
            min_price=min(min_price,A[i]);
        }
        else
            max_price=max(max_price,-min_price+A[i]);
    }
    return max_price;
}
