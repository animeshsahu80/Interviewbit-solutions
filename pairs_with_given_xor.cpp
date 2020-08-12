int Solution::solve(vector<int> &A, int B) {
    set<int> s;
    int ans=0;
    for(int i=0;i<A.size();i++){
        if(s.find(A[i]^B)!=s.end())
            ans++;
        s.insert(A[i]);
    }
    return ans;
}
