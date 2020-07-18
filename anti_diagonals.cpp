vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    map<int, vector<int>> mp;
    int n=A.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            mp[i+j].push_back(A[i][j]);
        }
    }
    vector<vector<int>>res;
    for(int i=0;i<mp.size();i++){
        res.push_back(mp[i]);
    }
    return res;
}
