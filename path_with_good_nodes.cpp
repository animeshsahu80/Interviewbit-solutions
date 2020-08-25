void dfs(vector<int> &A,vector<bool>& visited,int src,int goodnodes,int& ans,map<int,vector<int>>& adj,int C){
    if(visited[src]==true)
        return;
    if(A[src-1]){
        goodnodes++;
    }
    if(adj[src].size()==1){
        if(goodnodes<=C)
            ans++;
        return;
    }
    visited[src]=true;
    for(auto points:adj[src]){
        dfs(A,visited,points,goodnodes,ans,adj,C);
    }
    return;
}

int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    map<int,vector<int>> adj;
    for(auto node:B){
        adj[node[0]].push_back(node[1]);
        adj[node[1]].push_back(node[0]);
    }
    vector<bool> visited(A.size()+1,false);
    int ans=0;
    dfs(A,visited,1,0,ans,adj,C);
    return ans;
    
}
