
void dfs(int src,int dest,map<int,vector<int>>& mp,vector<bool>& visited,int& ans){
    if(src==dest){
        ans=1;     
        return;
    }    
    if(visited[src])
        return;
    visited[src]=true;
    for(auto points:mp[src]){
        if(visited[points]==false)
            dfs(points,dest,mp,visited,ans);
    }
    return;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    map<int,vector<int>> mp;
    for(auto node:B){
        mp[node[0]].push_back(node[1]);
    }
    vector<bool >visited( A+1,false);

    int ans=0;
    dfs(1,A,mp,visited,ans);
    return ans;
}
