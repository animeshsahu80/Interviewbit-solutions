int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> q;
    for(auto num:B){
        q.push(num);
    }
    long long sum=0;
    while(A--){
        long long temp=(long long ) q.top();
        sum+=temp;
        q.pop();
        q.push(floor(temp/2));
    }
    sum= sum% (long long)(pow(10,9)+7);
    return sum;
}
