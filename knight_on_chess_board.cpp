
bool isvalid(int x,int y,int A,int B){
    if(x<=0 || y<=0 || x>A || y>B)
        return false;
    return true;
}

int Solution::knight(int A, int B, int C, int D, int E, int F) {
    vector<vector<bool>> visited(A+1,vector<bool>(B+1,false));
    queue<pair<int,int>> q;
    q.push(make_pair(C,D));
    vector<int> dx={1,2,2,1,-1,-2,-2,-1};
    vector<int> dy={2,1,-1,-2,-2,-1,1,2};
    visited[C][D]=true;
    int ans=0;
    while(q.size()){
        int count=q.size();
        while(count--){
            auto node=q.front();
            if(node.first==E && node.second==F)
                return ans;
            q.pop();
            int x=node.first;
            int y=node.second;
            for(int i=0;i<8;i++){
                int new_x=x+ dx[i];
                int new_y=y+ dy[i];
                if(isvalid(new_x,new_y,A,B) && visited[new_x][new_y]==false){
                    q.push(make_pair(new_x,new_y));
                    visited[new_x][new_y]=true;
                }
            }
        }
        ans++;
    }
    return -1;
}
