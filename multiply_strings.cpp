string Solution::multiply(string A, string B) {
    
    int a=A.size();
    int b=B.size();
    vector<int> sum(a+b,0);
    for(int i=a-1;i>=0;i--){
        for(int j=b-1;j>=0;j--){
            int num=sum[i+j+1] +(A[i] - '0')*(B[j]-'0');
            sum[i+j+1]=num%10;
            sum[i+j]+=num/10;   
        }
    }
    string res="";
    for(auto val:sum){
        if(res.size() || val){
            res+=to_string(val);
        }
    }
    if(res=="")
        return "0";
    return res;
}
