vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    map<int,int> m1,m2,m3;
    vector<int> res;
    set<int> s;
    for(auto i:A){
        m1[i]++;
    }
    for(auto i:B){
        m2[i]++;
    }
    for(auto i:C){
        m3[i]++;
    }
    for(auto i:A){
        if(m2[i]>0 || m3[i]>0){
            s.insert(i);
        }
    }
    for(auto i:B){
        if(m1[i]>0 || m3[i]>0){
            s.insert(i);
        }
    }
    for(auto i:C){
        if(m2[i]>0 || m1[i]>0){
            s.insert(i);
        }
    }
    for(auto num:s){
        res.push_back(num);
    }
    sort(res.begin(),res.end());
    return res;
}
