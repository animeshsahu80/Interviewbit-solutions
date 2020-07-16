vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int ac_sum=0, ac_sqsum=0, sum=0 ,sqsum=0;
    int n=A.size();
    for(int i=0;i<n;i++){
        ac_sum+=(long long)A[i];
        ac_sqsum+=(long long)A[i]*(long long)A[i];
    }
    sum=((long long)n*((long long)n+1))/2;
    sqsum=(((long long)n)*((long long)n+1)*(2*(long long)n+1))/6;
    long long int x,y;
    long long int a=sum-ac_sum;
    long long int b=(sqsum -ac_sqsum)/(sum-ac_sum);
    x=(a+b)/2;
    y=(b-a)/2;
    vector<int> res;
    res.push_back(int(y));
    res.push_back(int(x));
    return res;
}