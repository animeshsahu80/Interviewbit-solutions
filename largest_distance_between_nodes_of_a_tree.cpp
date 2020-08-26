pair<int,int> bfs(int root,map<int, vector<int>>& adj,int n){
    vector<bool> visited(n,false);
    queue<pair<int,int>> q;
    q.push(make_pair(root,0));
    visited[root]=true;
    pair<int,int> temp;
    while(q.size()){
        temp=q.front();
        q.pop();
        for(int i=0;i<adj[temp.first].size();i++){
            if(visited[adj[temp.first][i]]==false){
                visited[adj[temp.first][i]]=true;
                q.push(make_pair(adj[temp.first][i],temp.second+1));
            }
        }
    }
    return temp;
}

int Solution::solve(vector<int> &A) {
    map<int, vector<int>> adj;
    for(int i=0;i<A.size();i++){
        if(A[i]==-1)
            continue;
        adj[i].push_back(A[i]);
        adj[A[i]].push_back(i);
    }
    int n=A.size();
    pair<int,int> p1,p2;
    p1=bfs(0,adj,n);
    p2=bfs(p1.first,adj,n);
    return p2.second;
}
