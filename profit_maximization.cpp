int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> q;
    for(auto num:A){
        q.push(num);
    }
    int ans=0;
    while(B--){
        int temp=q.top();
        ans+=temp;
        q.pop();
        q.push(temp-1);
    }
    return ans;
}
