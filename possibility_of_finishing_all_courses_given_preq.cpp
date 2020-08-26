bool dfs(map<int,vector<int>>& adj,int i,vector<bool> visited){
    if(visited[i])
        return true;
    visited[i]=true;
    for(auto course:adj[i]){
        if(dfs(adj,course,visited))
            return true;
    }
    return false;
}

int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    map<int,vector<int>> adj;
    for(int i=0;i<B.size();i++){
        adj[B[i]].push_back(C[i]);
    }
    vector<bool> visited(A+1,false);
    for(int i=0;i<A;i++){
        if(dfs(adj,i,visited))
            return 0;
    }
    return 1;
}
