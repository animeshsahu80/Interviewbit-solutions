int Solution::solve(vector<int> &A) {
    map<int,int> mp;
    int ans=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(mp.find(A[i])!=mp.end()){
            ans=min(ans,mp[A[i]]);
        }
       else
         mp.insert(make_pair(A[i],i));
    }
    if(ans==INT_MAX)
        return  -1;
    else
        return A[ans];
}
