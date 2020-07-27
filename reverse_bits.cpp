unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> res;
    while(A){
        res.push_back(A&1);
        A=A>>1;
    }
    int l=res.size();
    for(int i=l;i<32;i++){
        res.push_back(0);
    }
    unsigned int ans=0;
    for(int i=31;i>=0;i--){
        ans+=res[i]*pow(2,31-i);
    }
    return ans;
    
    
}
