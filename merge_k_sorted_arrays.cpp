


vector<int> Solution::solve(vector<vector<int> > &A) {
    struct comp{
    bool operator()(pair<int,pair<int,int>>& a,pair<int,pair<int,int>>& b){
        return a.first> b.first;
    }
};
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,comp> q;
    for(int i=0;i<A.size();i++){
        q.push(make_pair(A[i][0],make_pair(i,0)));
    }
    vector<int> res;
    while(q.size()){
        res.push_back(q.top().first);
        auto temp=q.top();
        q.pop();
        int row=temp.second.first;
        int col=temp.second.second;
        if(col<A[row].size()-1){
            col++;
            q.push(make_pair(A[row][col],make_pair(row,col)));
        }
            
    }
    return res;
}
