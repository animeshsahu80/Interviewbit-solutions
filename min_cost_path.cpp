bool isnotsafe(int x,int y,int r,int c){
    if(x<0 || y<0 || x>=r || y>=c)
        return true;
    return false;
}
struct comp{
    bool operator()(pair<int,pair<int,int>>& a,pair<int,pair<int,int>>& b){
        return a.first > b.first;
    }
};
int Solution::solve(int A, int B, vector<string> &C) {
    vector<vector<int>> cost(A,vector<int> (B,INT_MAX));
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, comp> q;
    
    q.push(make_pair(0,make_pair(0,0)));
    cost[0][0]=0;
    vector<int> dx={-1,1,0,0};
    vector<int> dy={0,0,-1,1};
    vector<char> dir={'U','D','L','R'};
    
    while(q.size()){
        auto cell=q.top();
        int x=cell.second.first;
        int y=cell.second.second;
        q.pop();
        if(C[x][y]=='#')
            continue;
        
        char temp=C[x][y];
        C[x][y]='#';
        for(int i=0;i<4;i++){
            int new_x=x+dx[i];
            int new_y=y+dy[i];
            if(isnotsafe(new_x,new_y,A,B))
                continue;
            int add;
            if(temp==dir[i])
                add=0;
            else
                add=1;
            cost[new_x][new_y]=min(add+ cost[x][y],cost[new_x][new_y]);
            q.push(make_pair(cost[new_x][new_y],make_pair(new_x,new_y)));
        }
    }
    return cost[A-1][B-1];
    
}
