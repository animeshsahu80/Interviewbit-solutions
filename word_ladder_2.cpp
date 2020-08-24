

int Solution::solve(string A, string B, vector<string> &C) {
    unordered_set<string> s(C.begin(),C.end());
    queue<string> q;
    if(s.find(B)==s.end())
        return 0;
    q.push(A);
    int level=1;
    while(q.size()){
        int count=q.size();
        while(count--){
            string curr=q.front();
            if(curr==B)
                return level;
            q.pop();
            for(int i=0;i<curr.size();i++){
                char c=curr[i];
                for(int j=0;j<26;j++){
                    curr[i]='a' + j;
                    if(s.find(curr)!=s.end()){
                        q.push(curr);
                        s.erase(curr);
                    }
                }
                curr[i]=c;
            }
        }
        level++;
    }
    return level;
}
