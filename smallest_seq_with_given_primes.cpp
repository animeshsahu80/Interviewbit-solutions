vector<int> Solution::solve(int A, int B, int C, int D) {
    priority_queue<int,vector<int>,greater<int>> q;
    q.push(A);
    q.push(B);
    q.push(C);
    vector<int> s;
    map<int,int> mp;
    while(s.size()<D){
        if(mp[q.top()]){
            q.pop();
            continue;
        }
        mp[q.top()]=1;
    
        int num=q.top();
        q.pop();
        s.push_back(num);
        if(mp[num*A]==0)
        q.push(num*A);
        if(mp[num*B]==0)
        q.push(num*B);
        if(mp[num*C]==0)
        q.push(num*C);
    }
    return s;
}
