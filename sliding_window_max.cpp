vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    deque <int> q;
    vector<int> res;
    if(A.size()==1)
        return A;
    if(B>A.size()){
        int ans=INT_MIN;
        for(int i=0;i<A.size();i++){
            ans=max(ans,A[i]);
        }
        res.push_back(ans);
        return res;
    }
    for(int i=0;i<B;i++){
        while(q.size()>0 && A[i]>A[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    res.push_back(A[q.front()]);
    for(int i=B;i<A.size();i++){
        
        while(q.size()>0 && q.front()<=i-B){
            q.pop_front();
        }
        while(q.size()>0 && A[i]>=A[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
        res.push_back(A[q.front()]);
    }
    return res;
}
