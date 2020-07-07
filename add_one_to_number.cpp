vector<int> Solution::plusOne(vector<int> &A) {
    int carry=0;
    vector<int> res;
    int l=A.size();
    for(int i=l-1;i>=0;i--){
        int num;
        if(i==l-1)
            num=A[i]+carry+1;
        else
            num=A[i]+carry;
        carry=num/10;
        res.push_back(num%10);
    }
    if(carry>0){
        res.push_back(carry);
    }
    int n=res.size();
    n--;
    while(res[n]==0){
        res.pop_back();
        n--;
    }
    reverse(res.begin(),res.end());
    return res;
}
