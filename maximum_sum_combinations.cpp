vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    priority_queue<int,vector<int>,greater<int>> q;
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());
    for(int i=0;i<C;i++){
        for(int j=0;j<C;j++){
            int val=A[i] + B[j];
            if(q.size()<C){
                q.push(val);
            }
            else{
                if(q.top()<val){
                    q.pop();
                    q.push(val);
                }
                else
                    break;
            }
        }
    }
    vector<int> res;
    while(C--){
        res.push_back(q.top());
        q.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
