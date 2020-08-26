
bool comp(const vector<int>& a,const vector<int>& b){
    return a[2]<b[2];
}

int find(vector<pair<int,int>>& nodes,int v){
    if(nodes[v].first==-1)
        return v;
    return nodes[v].first=find(nodes,nodes[v].first);
}
void Union(int from, int to,vector<pair<int,int>>& nodes){
    if(nodes[from].second>nodes[to].second){
        nodes[to].first=from;
    }
    else if(nodes[from].second<nodes[to].second){
        nodes[from].first=to;
    }
    else{
        nodes[from].first=to;
        nodes[to].second++;
    }
    return;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    sort(B.begin(),B.end(),comp);
    vector<pair<int,int>> nodes(A+1,make_pair(-1,0));
    int ans=0;
    int count=0;
    for(auto points:B){
        int p1=find(nodes,points[0]);
        int p2=find(nodes,points[1]);
        if(p1!=p2){
            count++;
            ans+=points[2];
            Union(p1,p2,nodes);
        }
        if(count==A-1)
            break;
    }
    return ans;
}
