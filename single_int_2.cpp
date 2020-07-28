int Solution::singleNumber(const vector<int> &A) {
    unsigned int ans=0;
    int bit=1;
    for(int i=0;i<32;i++){
        int count=0;
        for(auto num:A){
            count+=num&bit;
        }
        ans=ans+pow(2,i)*(count%3);
        bit*=2;
    }
    return ans;
    
}
