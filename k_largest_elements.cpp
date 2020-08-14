vector<int> Solution::solve(vector<int> &A, int B) {
    priority_queue<int,vector<int>,greater<int>> q;
    for(int num:A){
        q.push(num);
        if(q.size()>B)
            q.pop();
    }
    vector<int> res;
    while(q.size()){
        res.push_back(q.top());
        q.pop();
    }
    return res;
}
