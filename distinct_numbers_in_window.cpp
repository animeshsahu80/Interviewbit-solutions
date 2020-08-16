vector<int> Solution::dNums(vector<int> &A, int B) {
    map<int,int> mp;
    vector<int> res;
    for(int i=0;i<B;i++){
        mp[A[i]]++;
    }
    res.push_back(mp.size());
    for(int i=B;i<A.size();i++){
        mp[A[i]]++;
        if(mp[A[i-B]]==1)
            mp.erase(mp.find(A[i-B]));
        else
        mp[A[i-B]]--;
        res.push_back(mp.size());
    }
    return res;
}
